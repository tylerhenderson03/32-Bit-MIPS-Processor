#!/usr/bin/perl

# Date : 2nd Nov 2009
# Author : Quek Hong Cheang
# This script adds power pins to a verilog netlist
# Usage: addpower.pl input.v output.v
# Updated: Sept 2023 by Calder Wilson

if(@ARGV<2) {
   die("Please enter 2 inputs: E.g. addpower.pl input.v output.v\n")
} #if

if(!open(inPort, @ARGV[0])) {
   die("Cannot open file @ARGV[0]\n")
} #if

if(!open(outPort, ">@ARGV[1]")) {
   die("Cannot create file @ARGV[1]\n")
} #if

$pin1="VDD";
$pin2="VSS";
$pin3="VPW";
$pin4="VNW";
my $flag = 0;

# This line reads a line from the input file 'inPort' and assigns it to the variable $inLine. 
# The 'chomp' function removes the newline character from the end of the line.
while( chomp($inLine=<inPort>) ) {
   $inLine2 = $inLine; # Copy the contents of $inLine to a new variable $inLine2.
   $inLine2 =~ s/^ *//; # Remove leading spaces from $inLine2 using a regular expression substitution.
   @myList=split / /, $inLine2; # Split the contents of $inLine2 into an array @myList using space (' ') as the delimiter.
  
   # Check if the first element of @myList (usually the first word on the line) matches the word "module".
   if( @myList[0] =~ /module/) {
      # Add the power pins ($pin1, $pin2) after the opening parenthesis '('. This is used to add power pins to the module declaration.
      $inLine=~s/\(/\($pin1, $pin2, /;
   }
   
   # Check if the first element of @myList contains the word "input" and the flag is 0.
   if( @myList[0] =~ /input/ and $flag == 0) {
      # Add inout power ports.
      $inLine=~s/input/inout $pin1, $pin2;\n  input/;
      # Set the flag to 1 to indicate that the power ports have been added.
      $flag = 1;
   }

   # Check if the line contains nested parentheses, which typically indicates a submodule instantiation.
   if( $inLine =~ /.*\(..*\(.*\).*/ ) {
      # Add the power pins within the nested parentheses.
      $inLine=~s/\(/\(.$pin1\($pin1\), .$pin2\($pin2\), .$pin3\($pin2\), .$pin4\($pin1\), /;
      # Reset the flag to 0
      $flag = 0;
   }

   # Replace 1'b1 with VDD and 1'b0 with VSS.
   if( $inLine =~ /1'b1/ ) {
      $inLine=~s/1'b1/$pin1/;
   }
   if( $inLine =~ /1'b0/ ) {
      $inLine=~s/1'b0/$pin2/;
   }

   # Print the modified or unmodified line to the output file 'outPort'.
   print outPort $inLine, "\n";
}