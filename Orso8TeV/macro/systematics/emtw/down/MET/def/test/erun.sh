
./SystNon2J1T dirName TreesEle  input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes stack yes  > TreesEle_WW.txt
./SystNon2J1T dirName TreesEle  input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_SbarChannel.txt
./SystNon2J1T dirName TreesEle  input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_SChannel.txt
./SystNon2J1T dirName TreesEle  input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarChannel.txt
./SystNon2J1T dirName TreesEle  input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarWChannel.txt
./SystNon2J1T dirName TreesEle  input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TChannel.txt
./SystNon2J1T dirName TreesEle  input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TWChannel.txt
./SystNon2J1T dirName TreesEle  input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_WJets.txt
./SystNon2J1T dirName TreesEle  input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_WZ.txt
./SystNon2J1T dirName TreesEle  input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_ZJets.txt
./SystNon2J1T dirName TreesEle  input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_ZZ.txt
./SystNon2J1T dirName TreesEle  input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TTBar.txt

#./SystNon2J1T dirName TreesEle  prefix dimu input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
#./SystNon2J1T dirName TreesEle  prefix die input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode die
#./SystNon2J1T dirName TreesEle  prefix mue input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode mue
#./SystNon2J1T dirName TreesEle  prefix mutau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
#./SystNon2J1T dirName TreesEle  prefix etau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode etau
#./SystNon2J1T dirName TreesEle  prefix muhad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
#./SystNon2J1T dirName TreesEle  prefix ehad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
#./SystNon2J1T dirName TreesEle  prefix disemitau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes 



mv TreesEle*.root noJetPt; 
mv TreesEle*.txt noJetPt/txt/;
