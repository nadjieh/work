rm -f TreesMu_bkgWithWMG_RW.root
hadd TreesMu_bkgWithWMG_RW.root TreesMu_ZZ_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_WJets_RW.root TreesMu_QCD_RW.root TreesMu_ZJets_RW.root

rm -f TreesEle_bkgWithWMG_RW.root
hadd TreesEle_bkgWithWMG_RW.root TreesEle_ZZ_RW.root TreesEle_WZ_RW.root TreesEle_WW_RW.root TreesEle_WJets_RW.root TreesEle_QCD_RW.root TreesEle_ZJets_RW.root
