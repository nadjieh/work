rm -f TreesMu_WTemplateDefFormat_RW.root TreesMu_WJets_RW.root
rm -f TreesMu_cDownbkgWithWTemp_RW.root

hadd TreesMu_cDownbkgWithWTemp_RW.root TreesMu_cDownWTemplateDefFormat_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root


rm -f TreesMu_cDownbkgWithWMG_RW.root

hadd TreesMu_cDownbkgWithWMG_RW.root TreesMu_cDownWJetsMC_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root
