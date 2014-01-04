#MC
./OrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu ptrw 1 > TreesMu_TTBar.txt

mv TreesMu*.root TreesMu*.txt forAdding/vElecMET/noJetCut/; 



#MC
./OrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes ptrw 1 > TreesMu_TTBar.txt

mv TreesMu*.root TreesMu*.txt forStack/; 
