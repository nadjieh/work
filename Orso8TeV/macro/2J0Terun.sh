#MC
./SpecialWOrsoHistogramCreator dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no > TreesEle_WW.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_SbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_SChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_TbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_TbarWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_TChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_TWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_WJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_WZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_ZJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_ZZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  > TreesEle_TTBar.txt

#./DataSpecialWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  > TreesEle_data.txt
#./QCDSpecialWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  > TreesEle_qcd.txt

#./DefWSpecialWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  > TreesEle_DefW.txt
#./WTemplatePlots dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  > TreesEle_Wtemp.txt

mv TreesEle*.root TreesEle*.txt forAdding/2J0T/; 


./SpecialWOrsoHistogramCreator dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no stack yes  > TreesEle_WW.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_SbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_SChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TbarChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TbarWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TWChannel.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_WJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_WZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_ZJets.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_ZZ.txt
./SpecialWOrsoHistogramCreator dirName TreesEle input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  stack yes  > TreesEle_TTBar.txt

./QCDWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  stack yes  > TreesEle_qcd.txt

mv TreesEle*.root TreesEle*.txt forStack/2J0T/; 
