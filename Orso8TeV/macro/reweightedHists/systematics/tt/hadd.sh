rm -f TreesMu_bkgWithWTemp_RW.root
hadd TreesMu_bkgWithWTemp_RW.root TreesMu_ZZ_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_ZJets_RW.root TreesMu_WTemplateDefFormat_RW.root TreesMu_QCD_RW.root

rm -f TreesEle_bkgWithWTemp_RW.root
hadd TreesEle_bkgWithWTemp_RW.root TreesEle_ZZ_RW.root TreesEle_WZ_RW.root TreesEle_WW_RW.root TreesEle_ZJets_RW.root TreesEle_WTemplateDefFormat_RW.root TreesEle_QCD_RW.root
