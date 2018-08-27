#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
 double cone_volume (double rone, double rtwo, double h)
 {
   double v = 3.1415*((h*(rone *rone) + rone*rtwo + (rtwo*rtwo))/3);
   return v;
 }

int main(){
  cout << cone_volume(5,10,7) << endl;
  cout << cone_volume(7, 4, 5) << endl;
  cout << cone_volume(6, 7, 8);
  return 0;
}
