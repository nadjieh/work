#MET > 45

./Plot prefix TreesEle_ out TreesEle_TTBar_RW.root data TTBar mcinput TTBar beta 0.94772300 mcname  ttbar unc 0

./Plot prefix TreesEle_ out TreesEle_TWChannel_RW.root data TWChannel mcinput TWChannel beta 0.94772300 mcname  tw unc 0
./Plot prefix TreesEle_ out TreesEle_TbarWChannel_RW.root data TbarWChannel mcinput TbarWChannel beta 0.94772300 mcname  tw unc 0

./Plot prefix TreesEle_ out TreesEle_SChannel_RW.root data SChannel mcinput SChannel beta 0.94772300 mcname  tw unc 0
./Plot prefix TreesEle_ out TreesEle_SbarChannel_RW.root data SbarChannel mcinput SbarChannel beta 0.94772300 mcname  tw unc 0

./Plot prefix TreesEle_ out TreesEle_WW_RW.root data WW mcinput WW beta 2.4310389 mcname  diboson unc 0
./Plot prefix TreesEle_ out TreesEle_ZZ_RW.root data ZZ mcinput ZZ beta 2.4310389 mcname  diboson unc 0
./Plot prefix TreesEle_ out TreesEle_WZ_RW.root data WZ mcinput WZ beta 2.4310389 mcname  diboson unc 0

./Plot prefix TreesEle_ out TreesEle_ZJets_RW.root data ZJets mcinput ZJets beta 2.4310389 mcname  zjets unc 0

./Plot prefix TreesEle_ out TreesEle_TChannel_RW.root data TChannel mcinput TChannel beta 0.95141156 mcname  signal unc 0
./Plot prefix TreesEle_ out TreesEle_TbarChannel_RW.root data TbarChannel mcinput TbarChannel beta 0.95141156 mcname  signal unc 0


mkdir -p plotsrc/txt; mv *plots.root  plotsrc/; mv *.txt plotsrc/txt;
