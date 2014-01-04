#! python

import os

SubmitFile = open( 'SubmitAll.sh' , 'w')

print >> SubmitFile, 'chmod a+x Job_*.sh'

for JobID in range(0 , 100):
    FileName = 'Job_%(JobID)02d.sh' % {'JobID':JobID}
    print >> SubmitFile, 'bsub -q 8nh %(File)s &' % {'File':FileName}
    JobFile = open( FileName , 'w')
    print >> JobFile, '. /afs/cern.ch/sw/lcg/external/gcc/4.3.2/x86_64-slc5/setup.sh'
    print >> JobFile, 'export PATH="/afs/cern.ch/sw/lcg/external/Python/2.6.5/x86_64-slc5-gcc43-opt/bin:$PATH"'
    print >> JobFile, 'export LD_LIBRARY_PATH="/afs/cern.ch/sw/lcg/external/Python/2.6.5/x86_64-slc5-gcc43-opt/lib:$LD_LIBRARY_PATH"'
    print >> JobFile, '. /afs/cern.ch/sw/lcg/app/releases/ROOT/5.32.01/x86_64-slc5-gcc43-opt/root/bin/thisroot.sh'
    print >> JobFile, 'cd /afs/cern.ch/work/a/ajafari/FitValidation/AnalysisClasses/ToyAnalysis/macro'
    print >> JobFile, '%(File)s %(StartPEX)d %(LPEX)d %(StartPEXPull)d %(LPEXPull)d' % {'File':'./doValidation' , 'StartPEX':JobID*3 , 'LPEX':3 , 'StartPEXPull':JobID*10 , 'LPEXPull':10}
    JobFile.close()

SubmitFile.close()

