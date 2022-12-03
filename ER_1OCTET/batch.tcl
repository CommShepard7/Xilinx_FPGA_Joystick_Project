wave add -r test_er_1octet
vcd dumpfile output.vcd
vcd dumpvars -m test_er_1octet -l 0
run 700ns
vcd dumpflush
exit
