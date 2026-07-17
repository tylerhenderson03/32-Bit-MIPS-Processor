run -all
coverage save a.ucdb
coverage report -details -html
coverage report -details -output cov.rpt
coverage report -cvg -details -output func_cov.rpt
vcover report -cvg -details a.ucdb > func_cov.rpt
exit

