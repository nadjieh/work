
rm -f TreesMu_bkgWithWTemp_RW.root

hadd TreesMu_bkgWithWTemp_RW.root TreesMu_WTemplateDefFormat_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root


rm -f TreesMu_bkgWithWMG_RW.root

hadd TreesMu_bkgWithWMG_RW.root TreesMu_WJets_RW.root TreesMu_ZZ_RW.root TreesMu_ZJets_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_QCDPhi_RW.root
