#MC
./OrsoHistogramCreator dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no > TreesEle_WW.txt
./OrsoHistogramCreator dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_SbarChannel.txt
./OrsoHistogramCreator dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_SChannel.txt
./OrsoHistogramCreator dirName TreesEle input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TbarChannel.txt
./OrsoHistogramCreator dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TbarWChannel.txt
./OrsoHistogramCreator dirName TreesEle input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TChannel.txt
./OrsoHistogramCreator dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TWChannel.txt
./OrsoHistogramCreator dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_WJets.txt
./OrsoHistogramCreator dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_WZ.txt
./OrsoHistogramCreator dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_ZJets.txt
./OrsoHistogramCreator dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_ZZ.txt
./OrsoHistogramCreator dirName TreesEle input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  > TreesEle_TTBar.txt

#./DataOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  > TreesEle_data.txt
#./QCDOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  > TreesEle_qcd.txt

#./DefWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  > TreesEle_DefW.txt
#./WTemplatePlots dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  > TreesEle_Wtemp.txt

mv TreesEle*.root TreesEle*.txt forAdding/metphi; 


./OrsoHistogramCreator dirName TreesEle input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no stack yes  > TreesEle_WW.txt
./OrsoHistogramCreator dirName TreesEle input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_SbarChannel.txt
./OrsoHistogramCreator dirName TreesEle input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_SChannel.txt
./OrsoHistogramCreator dirName TreesEle input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_TbarChannel.txt
./OrsoHistogramCreator dirName TreesEle input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_TbarWChannel.txt
./OrsoHistogramCreator dirName TreesEle input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_TChannel.txt
./OrsoHistogramCreator dirName TreesEle input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_TWChannel.txt
./OrsoHistogramCreator dirName TreesEle input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_WJets.txt
./OrsoHistogramCreator dirName TreesEle input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_WZ.txt
./OrsoHistogramCreator dirName TreesEle input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_ZJets.txt
./OrsoHistogramCreator dirName TreesEle input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_ZZ.txt
./OrsoHistogramCreator dirName TreesEle input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData no  stack yes  > TreesEle_TTBar.txt

#./DataOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_data.txt
#./QCDOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_qcd.txt

#./DefWOrsoHistogramCreator dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_DefW.txt
#./WTemplatePlots dirName TreesEle input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root metphi 1  isData yes  stack yes  > TreesEle_Wtemp.txt

mv TreesEle*.root TreesEle*.txt forStack/metphi; 
