#MC
#./Syst2J1T input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu stack yes > TreesMu_WW.txt
#./Syst2J1T input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SbarChannel.txt
#./Syst2J1T input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SChannel.txt
./Syst2J1T dirName TreesMu input TbarChannel_MassUp METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesMu_TbarChannel.txt; mv TreesMu_TbarChannel_MassUp_plots.root TreesMu_TbarChannel_MassDown_plots.root
#./Syst2J1T input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarWChannel.txt
./Syst2J1T input TChannel_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TChannel.txt
#./Syst2J1T input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TWChannel.txt
#./Syst2J1T input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WJets.txt
#./Syst2J1T input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WZ.txt
#./Syst2J1T input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZJets.txt
#./Syst2J1T input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZZ.txt
./Syst2J1T input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TTBar_MassDown.txt

./Syst2J1T dirName TreesMu prefix dimu input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode dimu
./Syst2J1T dirName TreesMu prefix die input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu prefix mue input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mue
./Syst2J1T dirName TreesMu prefix mutau input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mutau
./Syst2J1T dirName TreesMu prefix etau input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu prefix muhad input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu prefix ehad input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./Syst2J1T dirName TreesMu prefix disemitau input TTBar_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no 

./Syst2J1T dirName TreesMu input TbarWChannelFullLep_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesMu_TbarWChannelFullLep.txt

./Syst2J1T dirName TreesMu input TbarWChannelThadWlep_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesMu_TbarWChannelThadWlep.txt

./Syst2J1T dirName TreesMu input TbarWChannelTlepWhad_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesMu_TbarWChannelTlepWhad.txt



./Syst2J1T dirName TreesMu input TWChannelFullLep_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesMu_TWChannelFullLep.txt

./Syst2J1T dirName TreesMu input TWChannelThadWlep_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesMu_TWChannelThadWlep.txt

./Syst2J1T dirName TreesMu input TWChannelTlepWhad_MassDown METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesMu_TWChannelTlepWhad.txt

mv TreesMu*.root noJetPt; 
mv TreesMu*.txt noJetPt/txt/;
