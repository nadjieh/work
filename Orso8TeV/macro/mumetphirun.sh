#MC
./mumetOrsoHistogramCreator input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no dirName TreesMu > TreesMu_WW.txt
./mumetOrsoHistogramCreator input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_SbarChannel.txt
./mumetOrsoHistogramCreator input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_SChannel.txt
./mumetOrsoHistogramCreator input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_TbarChannel.txt
./mumetOrsoHistogramCreator input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_TbarWChannel.txt
./mumetOrsoHistogramCreator input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_TChannel.txt
./mumetOrsoHistogramCreator input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_TWChannel.txt
./mumetOrsoHistogramCreator input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_WJets.txt
./mumetOrsoHistogramCreator input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_WZ.txt
./mumetOrsoHistogramCreator input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_ZJets.txt
./mumetOrsoHistogramCreator input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_ZZ.txt
./mumetOrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu > TreesMu_TTBar.txt

#./DataOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData yes  dirName TreesMu > TreesMu_data.txt
#./QCDOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData yes  dirName TreesMu > TreesMu_qcd.txt

#./DefWOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData yes  dirName TreesMu > TreesMu_DefW.txt
#./WTemplatePlots input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData yes  dirName TreesMu > TreesMu_Wtemp.txt

mv TreesMu*.root TreesMu*.txt forAdding/mumetphi/; 



#MC
./mumetOrsoHistogramCreator input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no dirName TreesMu stack yes > TreesMu_WW.txt
./mumetOrsoHistogramCreator input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_SbarChannel.txt
./mumetOrsoHistogramCreator input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_SChannel.txt
./mumetOrsoHistogramCreator input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_TbarChannel.txt
./mumetOrsoHistogramCreator input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_TbarWChannel.txt
./mumetOrsoHistogramCreator input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_TChannel.txt
./mumetOrsoHistogramCreator input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_TWChannel.txt
./mumetOrsoHistogramCreator input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_WJets.txt
./mumetOrsoHistogramCreator input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_WZ.txt
./mumetOrsoHistogramCreator input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_ZJets.txt
./mumetOrsoHistogramCreator input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_ZZ.txt
./mumetOrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData no  dirName TreesMu stack yes > TreesMu_TTBar.txt

./mumetDataOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData yes  dirName TreesMu stack yes > TreesMu_data.txt
./mumetQCDOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData yes  dirName TreesMu stack yes > TreesMu_qcd.txt

./mumetDefWOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1 isData yes  dirName TreesMu stack yes > TreesMu_DefW.txt


mv TreesMu*.root TreesMu*.txt forStack/mumetphi/; 
