./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix dimu input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode dimu
./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix die input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix mue input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mue
./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix mutau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no ttDecayMode mutaue
./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix etau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix muhad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix ehad input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 
./OrsoHistogramCreator nBinY 360 dirName TreesMu prefix disemitau input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root  isData no 

mv TreesMu*.root TreesMu*.txt forStack/nBin360/; 
