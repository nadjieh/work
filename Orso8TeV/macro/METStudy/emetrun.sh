#MC
./METHistogramCreator dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no > TreesEle_WW.txt
./METHistogramCreator dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_SbarChannel.txt
./METHistogramCreator dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_SChannel.txt
./METHistogramCreator dirName TreesEle input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TbarChannel.txt
./METHistogramCreator dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TbarWChannel.txt
./METHistogramCreator dirName TreesEle input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TChannel.txt
./METHistogramCreator dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TWChannel.txt
./METHistogramCreator dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_WJets.txt
./METHistogramCreator dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_WZ.txt
./METHistogramCreator dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_ZJets.txt
./METHistogramCreator dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_ZZ.txt
./METHistogramCreator dirName TreesEle input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TTBar.txt

#./DataMETHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_data.txt
#./QCDMETHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_qcd.txt

#./DefWMETHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_DefW.txt
#./WTemplatePlots dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_Wtemp.txt

#mv TreesEle*.root TreesEle*.txt forStack/metphi; 
