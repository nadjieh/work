rm -f TreesMu_WTemplateDefFormat_RW.root TreesMu_WJets_RW.root
rm -f TreesMu_bDownbkgWithWTemp_RW.root

hadd TreesMu_bDownbkgWithWTemp_RW.root TreesMu_bDownWTemplateDefFormat_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root


rm -f TreesMu_bDownbkgWithWMG_RW.root

hadd TreesMu_bDownbkgWithWMG_RW.root TreesMu_bDownWJetsMC_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root
