#MC
./SpecialWOrsoHistogramCreator input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu > TreesMu_WW.txt
./SpecialWOrsoHistogramCreator input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_SbarChannel.txt
./SpecialWOrsoHistogramCreator input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_SChannel.txt
./SpecialWOrsoHistogramCreator input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TbarChannel.txt
./SpecialWOrsoHistogramCreator input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TbarWChannel.txt
./SpecialWOrsoHistogramCreator input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TChannel.txt
./SpecialWOrsoHistogramCreator input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TWChannel.txt
./SpecialWOrsoHistogramCreator input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_WJets.txt
./SpecialWOrsoHistogramCreator input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_WZ.txt
./SpecialWOrsoHistogramCreator input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_ZJets.txt
./SpecialWOrsoHistogramCreator input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_ZZ.txt
./SpecialWOrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TTBar.txt

#./DataSpecialWOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_data.txt
#./QCDSpecialWOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_qcd.txt

#./DefWSpecialWOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_DefW.txt
#./WTemplatePlots input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_Wtemp.txt

mv TreesMu*.root TreesMu*.txt forAdding/2J0T/; 



#MC
./SpecialWOrsoHistogramCreator input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu stack yes > TreesMu_WW.txt
./SpecialWOrsoHistogramCreator input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SbarChannel.txt
./SpecialWOrsoHistogramCreator input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SChannel.txt
./SpecialWOrsoHistogramCreator input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarChannel.txt
./SpecialWOrsoHistogramCreator input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarWChannel.txt
./SpecialWOrsoHistogramCreator input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TChannel.txt
./SpecialWOrsoHistogramCreator input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TWChannel.txt
./SpecialWOrsoHistogramCreator input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WJets.txt
./SpecialWOrsoHistogramCreator input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WZ.txt
./SpecialWOrsoHistogramCreator input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZJets.txt
./SpecialWOrsoHistogramCreator input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZZ.txt
./SpecialWOrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TTBar.txt


./QCDWOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_qcd.txt



mv TreesMu*.root TreesMu*.txt forStack/2J0T/; 
