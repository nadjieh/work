rm -f TreesEle_bDownbkgWithWMG_RW.root
hadd TreesEle_bDownbkgWithWMG_RW.root TreesEle_ZZ_RW.root TreesEle_WZ_RW.root TreesEle_WW_RW.root TreesEle_ZJets_RW.root TreesEle_bDownWJetsMC_RW.root ../TreesEle_QCD_RW.root

rm -f TreesMu_bDownbkgWithWMG_RW.root
hadd TreesMu_bDownbkgWithWMG_RW.root TreesMu_ZZ_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_ZJets_RW.root TreesMu_bDownWJetsMC_RW.root ../TreesMu_QCD_RW.root
