#MC
./OrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu stack yes > TreesMu_TTBar.txt
./OrsoHistogramCreator input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu stack yes > TreesMu_WW.txt
./OrsoHistogramCreator input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SbarChannel.txt
./OrsoHistogramCreator input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SChannel.txt
./OrsoHistogramCreator input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarChannel.txt
./OrsoHistogramCreator input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarWChannel.txt
./OrsoHistogramCreator input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TChannel.txt
./OrsoHistogramCreator input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TWChannel.txt
./OrsoHistogramCreator input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WZ.txt
./OrsoHistogramCreator input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZJets.txt
./OrsoHistogramCreator input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZZ.txt
./QCDOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_qcd.txt

./DefWOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_DefW.txt

mv *.root V15Eta/forStack
rm -f *txt
