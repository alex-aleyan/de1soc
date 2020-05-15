0. See ../README file first!
1. make sure ./../../../../common is cloned.
sed 's/5CSEMA5F31C6/5CSEMA5F31C6N/g' soc_system.qsf
2. run "./generateqsys.sh *.qsys" before simulating/building qsys system/
sed 's/5CSEMA5F31C6N/5CSEMA5F31C6/g' soc_system.qsf
3. run "./build.sh *.qpf" to launch a build
4. run "./CleanSyn.ln" to clean this directory

Note:
  ipupgrade.ln not working yet
