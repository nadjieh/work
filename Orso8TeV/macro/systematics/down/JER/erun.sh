
./SystNon2J1T dirName TreesEle JER -1 input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no stack yes  > TreesEle_WW.txt
./SystNon2J1T dirName TreesEle JER -1 input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_SbarChannel.txt
./SystNon2J1T dirName TreesEle JER -1 input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_SChannel.txt
./SystNon2J1T dirName TreesEle JER -1 input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TbarChannel.txt
./SystNon2J1T dirName TreesEle JER -1 input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TbarWChannel.txt
./SystNon2J1T dirName TreesEle JER -1 input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TChannel.txt
./SystNon2J1T dirName TreesEle JER -1 input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TWChannel.txt
./SystNon2J1T dirName TreesEle JER -1 input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_WJets.txt
./SystNon2J1T dirName TreesEle JER -1 input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_WZ.txt
./SystNon2J1T dirName TreesEle JER -1 input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_ZJets.txt
./SystNon2J1T dirName TreesEle JER -1 input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_ZZ.txt
./SystNon2J1T dirName TreesEle JER -1 input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TTBar.txt

#./SystNon2J1T dirName TreesEle JER -1 prefix dimu input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesEle JER -1 prefix die input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode die
#./SystNon2J1T dirName TreesEle JER -1 prefix mue input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mue
#./SystNon2J1T dirName TreesEle JER -1 prefix mutau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesEle JER -1 prefix etau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode etau
#./SystNon2J1T dirName TreesEle JER -1 prefix muhad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesEle JER -1 prefix ehad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesEle JER -1 prefix disemitau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no 



mv TreesEle*.root noJetPt; 
mv TreesEle*.txt noJetPt/txt/;
