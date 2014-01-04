#MET > 45
./Plot prefix TreesEle_dimu_ out TreesEle_dimu_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0
./Plot prefix TreesEle_die_ out TreesEle_die_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0
./Plot prefix TreesEle_mue_ out TreesEle_mue_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0
./Plot prefix TreesEle_mutau_ out TreesEle_mutau_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0
./Plot prefix TreesEle_etau_ out TreesEle_etau_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0
./Plot prefix TreesEle_muhad_ out TreesEle_muhad_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0
./Plot prefix TreesEle_ehad_ out TreesEle_ehad_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0
./Plot prefix TreesEle_disemitau_ out TreesEle_disemitau_TTBar_Q2Up_RW.root data TTBar_Q2Up mcinput TTBar_Q2Up beta 0.94772300 mcname  TTBar_Q2Up unc 0


./Plot prefix TreesEle_ out TreesEle_TChannel_Q2Up_RW.root data TChannel_Q2Up mcinput TChannel_Q2Up beta 0.95141156 mcname  signal unc 0
./Plot prefix TreesEle_ out TreesEle_TbarChannel_Q2Up_RW.root data TbarChannel_Q2Up mcinput TbarChannel_Q2Up beta 0.95141156 mcname  signal unc 0

./Plot prefix TreesEle_ out TreesEle_TWChannelFullLep_Q2Up_RW.root data TWChannelFullLep_Q2Up mcinput TWChannelFullLep_Q2Up beta 0.94772300 mcname  tw unc 0
./Plot prefix TreesEle_ out TreesEle_TbarWChannelFullLep_Q2Up_RW.root data TbarWChannelFullLep_Q2Up mcinput TbarWChannelFullLep_Q2Up beta 0.94772300 mcname  tw unc 0

./Plot prefix TreesEle_ out TreesEle_TWChannelThadWlep_Q2Up_RW.root data TWChannelThadWlep_Q2Up mcinput TWChannelThadWlep_Q2Up beta 0.94772300 mcname  tw unc 0
./Plot prefix TreesEle_ out TreesEle_TbarWChannelThadWlep_Q2Up_RW.root data TbarWChannelThadWlep_Q2Up mcinput TbarWChannelThadWlep_Q2Up beta 0.94772300 mcname  tw unc 0

./Plot prefix TreesEle_ out TreesEle_TbarWChannelTlepWhad_Q2Up_RW.root data TbarWChannelTlepWhad_Q2Up mcinput TbarWChannelTlepWhad_Q2Up beta 0.94772300 mcname  tw unc 0
./Plot prefix TreesEle_ out TreesEle_TWChannelTlepWhad_Q2Up_RW.root data TWChannelTlepWhad_Q2Up mcinput TWChannelTlepWhad_Q2Up beta 0.94772300 mcname  tw unc 0
mkdir -p plotsrc/txt; mv *plots.root  plotsrc/; mv *.txt plotsrc/txt;
