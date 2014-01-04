rm -f TreesMu_WTemplateDefFormat_RW.root TreesMu_WJets_RW.root
rm -f TreesMu_bUpbkgWithWTemp_RW.root

hadd TreesMu_bUpbkgWithWTemp_RW.root TreesMu_bUpWTemplateDefFormat_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root


rm -f TreesMu_bUpbkgWithWMG_RW.root

hadd TreesMu_bUpbkgWithWMG_RW.root TreesMu_bUpWJetsMC_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root
