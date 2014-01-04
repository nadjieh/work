MC
./Syst2J1T input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu dolumi 1 stack yes > TreesMu_WW.txt
./Syst2J1T input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_SbarChannel.txt
./Syst2J1T input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_SChannel.txt
./Syst2J1T input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_TbarChannel.txt
./Syst2J1T input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_TbarWChannel.txt
./Syst2J1T input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_TChannel.txt
./Syst2J1T input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_TWChannel.txt
./Syst2J1T input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_WJets.txt
./Syst2J1T input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_WZ.txt
./Syst2J1T input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_ZJets.txt
./Syst2J1T input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_ZZ.txt
./Syst2J1T input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu dolumi 1 stack yes > TreesMu_TTBar.txt

./Syst2J1T dirName TreesMu dolumi 1 prefix dimu input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode dimu
./Syst2J1T dirName TreesMu dolumi 1 prefix die input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu dolumi 1 prefix mue input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mue
./Syst2J1T dirName TreesMu dolumi 1 prefix mutau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mutau
./Syst2J1T dirName TreesMu dolumi 1 prefix etau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu dolumi 1 prefix muhad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu dolumi 1 prefix ehad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu dolumi 1 prefix disemitau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no 


mv TreesMu*.root noJetPt; 
mv TreesMu*.txt noJetPt/txt/;
