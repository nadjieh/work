#include "/opt/root/math/mathmore/inc/Math/GSLMinimizer.h"
#include "/opt/root/math/mathmore/inc/Math/GSLSimAnMinimizer.h"
#include "/opt/root/math/minuit2/inc/Minuit2/Minuit2Minimizer.h"
#include "/opt/root/math/mathcore/inc/Math/Functor.h"
 
double RosenBrock(const double *xx )
{
  const Double_t x = xx[0];
  const Double_t y = xx[1];
  const Double_t z = xx[2];
  const Double_t t = xx[3];
  const Double_t tmp1 = (x-1)*(x-1);
  const Double_t tmp2 = (y-2.3)*(y-2.3);
  const Double_t tmp3 = (z-1.2)*(z-1.2);
  const Double_t tmp4 = (t-2)*(t-2);
  return tmp1+tmp2+tmp3+tmp4;
}
 
int GSLMinimizerNumerical()
{
   // Choose method upon creation between:
   // kConjugateFR, kConjugatePR, kVectorBFGS,
   // kVectorBFGS2, kSteepestDescent
   // ROOT::Math::GSLMinimizer min( ROOT::Math::kVectorBFGS );
   // ROOT::Math::GSLSimAnMinimizer min;
   ROOT::Minuit2::Minuit2Minimizer min ( ROOT::Minuit2::kMigrad );
   min.SetMaxFunctionCalls(1000000);
   min.SetMaxIterations(100000);
   min.SetTolerance(0.001);
 
   ROOT::Math::Functor f(&RosenBrock,4); 
   double step[4] = {0.01,0.01,0.01,0.01};
   double variable[4] = { -1.,1.2, 2, 1.5};
 
   min.SetFunction(f);
 
   // Set the free variables to be minimized!
   min.SetVariable(0,"x",variable[0], step[0]);
   min.SetVariable(1,"y",variable[1], step[1]);
   min.SetVariable(2,"z",variable[2], step[2]);
   min.SetVariable(3,"t",variable[3], step[3]); 
   min.Minimize(); 
 
   const double *xs = min.X();
   cout << "Minimum: f(" << xs[0] << "," << xs[1] << "," << xs[2] << "," << xs[3] <<  "): " 
        << RosenBrock(xs) << endl;
 
   return 0;
}
