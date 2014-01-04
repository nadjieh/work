#./Syst2J1T dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes stack yes  > TreesEle_WW.txt
#./Syst2J1T dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_SbarChannel.txt
#./Syst2J1T dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_SChannel.txt
./Syst2J1T dirName TreesEle input TbarChannel_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarChannel.txt
#./Syst2J1T dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarWChannel.txt
./Syst2J1T dirName TreesEle input TChannel_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TChannel.txt
#./Syst2J1T dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TWChannel.txt
#./Syst2J1T dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_WJets.txt
#./Syst2J1T dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_WZ.txt
#./Syst2J1T dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_ZJets.txt
#./Syst2J1T dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_ZZ.txt
./Syst2J1T dirName TreesEle input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TTBar_Q2Up.txt

./Syst2J1T dirName TreesEle prefix dimu input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle prefix die input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode die
./Syst2J1T dirName TreesEle prefix mue input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode mue
./Syst2J1T dirName TreesEle prefix mutau input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle prefix etau input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes ttDecayMode etau
./Syst2J1T dirName TreesEle prefix muhad input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle prefix ehad input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no emtw yes 
./Syst2J1T dirName TreesEle prefix disemitau input TTBar_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes 


./Syst2J1T dirName TreesEle input TbarWChannelFullLep_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarWChannelFullLep.txt

./Syst2J1T dirName TreesEle input TbarWChannelThadWlep_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarWChannelThadWlep.txt

./Syst2J1T dirName TreesEle input TbarWChannelTlepWhad_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TbarWChannelTlepWhad.txt


./Syst2J1T dirName TreesEle input TWChannelFullLep_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TWChannelFullLep.txt

./Syst2J1T dirName TreesEle input TWChannelThadWlep_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TWChannelThadWlep.txt

./Syst2J1T dirName TreesEle input TWChannelTlepWhad_Q2Up METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no emtw yes  stack yes  > TreesEle_TWChannelTlepWhad.txt


mv TreesEle*.root noJetPt; 
mv TreesEle*.txt noJetPt/txt/;
