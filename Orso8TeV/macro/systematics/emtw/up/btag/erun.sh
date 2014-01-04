
./Syst2J1T dirName TreesEle btag 1 input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes stack yes  > TreesEle_WW.txt
./Syst2J1T dirName TreesEle btag 1 input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_SbarChannel.txt
./Syst2J1T dirName TreesEle btag 1 input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_SChannel.txt
./Syst2J1T dirName TreesEle btag 1 input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarChannel.txt
./Syst2J1T dirName TreesEle btag 1 input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarWChannel.txt
./Syst2J1T dirName TreesEle btag 1 input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TChannel.txt
./Syst2J1T dirName TreesEle btag 1 input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TWChannel.txt
./Syst2J1T dirName TreesEle btag 1 input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_WJets.txt
./Syst2J1T dirName TreesEle btag 1 input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_WZ.txt
./Syst2J1T dirName TreesEle btag 1 input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_ZJets.txt
./Syst2J1T dirName TreesEle btag 1 input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_ZZ.txt
./Syst2J1T dirName TreesEle btag 1 input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TTBar.txt

./Syst2J1T dirName TreesEle btag 1 prefix dimu input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle btag 1 prefix die input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode die
./Syst2J1T dirName TreesEle btag 1 prefix mue input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode mue
./Syst2J1T dirName TreesEle btag 1 prefix mutau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle btag 1 prefix etau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode etau
./Syst2J1T dirName TreesEle btag 1 prefix muhad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle btag 1 prefix ehad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle btag 1 prefix disemitau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes 



mv TreesEle*.root noJetPt; 
mv TreesEle*.txt noJetPt/txt/;
