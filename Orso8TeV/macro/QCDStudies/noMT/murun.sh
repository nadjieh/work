
#MC
./QCDStudies input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu stack yes > TreesMu_WW.txt
./QCDStudies input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SbarChannel.txt
./QCDStudies input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SChannel.txt
./QCDStudies input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarChannel.txt
./QCDStudies input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarWChannel.txt
./QCDStudies input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TChannel.txt
./QCDStudies input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TWChannel.txt
./QCDStudies input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WJets.txt
./QCDStudies input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WZ.txt
./QCDStudies input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZJets.txt
./QCDStudies input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZZ.txt
./QCDStudies input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TTBar.txt

#./DataQCDStudies input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_data.txt
#./QCDQCDStudies input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_qcd.txt

#./DefWQCDStudies input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_DefW.txt
#./WTemplatePlots input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_Wtemp.txt

mv TreesMu*.root TreesMu*.txt mmtw/; 
