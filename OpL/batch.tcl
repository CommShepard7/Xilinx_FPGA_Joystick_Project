wave add -r TestOpl
vcd dumpfile output.vcd
vcd dumpvars -m TestOpl -l 0
run 10000ns
vcd dumpflush
exit
