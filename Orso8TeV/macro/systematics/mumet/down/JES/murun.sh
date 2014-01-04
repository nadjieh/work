#MC
./SystNon2J1T input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu JES -1 stack yes > TreesMu_WW.txt
./SystNon2J1T input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_SbarChannel.txt
./SystNon2J1T input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_SChannel.txt
./SystNon2J1T input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_TbarChannel.txt
./SystNon2J1T input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_TbarWChannel.txt
./SystNon2J1T input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_TChannel.txt
./SystNon2J1T input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_TWChannel.txt
./SystNon2J1T input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_WJets.txt
./SystNon2J1T input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_WZ.txt
./SystNon2J1T input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_ZJets.txt
./SystNon2J1T input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_ZZ.txt
./SystNon2J1T input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu JES -1 stack yes > TreesMu_TTBar.txt

#./SystNon2J1T dirName TreesMu JES -1 prefix dimu input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode dimu
#./SystNon2J1T dirName TreesMu JES -1 prefix die input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesMu JES -1 prefix mue input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mue
#./SystNon2J1T dirName TreesMu JES -1 prefix mutau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mutau
#./SystNon2J1T dirName TreesMu JES -1 prefix etau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesMu JES -1 prefix muhad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesMu JES -1 prefix ehad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
#./SystNon2J1T dirName TreesMu JES -1 prefix disemitau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no 


mv TreesMu*.root noJetPt; 
mv TreesMu*.txt noJetPt/txt/;
