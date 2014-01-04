#MC
./SpecialWOrsoHistogramCreator dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no > TreesEle_WW.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_SbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_SChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_TbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_TbarWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_TChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_TWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_WJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_WZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_ZJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_ZZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  > TreesEle_TTBar.txt

./QCDWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  selW yes emtw yes stack yes > TreesEle_qcd.txt

./DefWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes selW yes emtw yes > TreesEle_DefW.txt

mv TreesEle*.root TreesEle*.txt forAdding/emtw/2J0T/; 


./SpecialWOrsoHistogramCreator dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no stack yes  > TreesEle_WW.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_SbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_SChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_TbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_TbarWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_TChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_TWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_WJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_WZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_ZJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_ZZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  selW yes emtw yes isData no  stack yes  > TreesEle_TTBar.txt


mv TreesEle*.root TreesEle*.txt forStack/emtw/2J0T/; 
