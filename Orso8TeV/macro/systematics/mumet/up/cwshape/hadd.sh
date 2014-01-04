#rm -f TreesMu_WTemplateDefFormat_RW.root TreesMu_WJets_RW.root
rm -f TreesMu_cUpbkgWithWTemp_RW.root

hadd TreesMu_cUpbkgWithWTemp_RW.root TreesMu_cUpWTemplateDefFormat_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root


rm -f TreesMu_cUpbkgWithWMG_RW.root

hadd TreesMu_cUpbkgWithWMG_RW.root TreesMu_cUpWJetsMC_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root
