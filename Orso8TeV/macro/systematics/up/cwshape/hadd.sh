rm -f TreesMu_cUpbkgWithWMG_RW.root
hadd TreesMu_cUpbkgWithWMG_RW.root TreesMu_ZZ_RW.root TreesMu_WZ_RW.root TreesMu_WW_RW.root TreesMu_cUpWJetsMC_RW.root ../TreesMu_QCD_RW.root TreesMu_ZJets_RW.root

rm -f TreesEle_cUpbkgWithWMG_RW.root
hadd TreesEle_cUpbkgWithWMG_RW.root TreesEle_ZZ_RW.root TreesEle_WZ_RW.root TreesEle_WW_RW.root TreesEle_cUpWJetsMC_RW.root ../TreesEle_QCD_RW.root TreesEle_ZJets_RW.root
