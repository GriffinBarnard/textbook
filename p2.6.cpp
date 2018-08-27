#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){

	cout << "Give a measuremnt in meters you want converted to inches, feet, and miles" << endl;
  int m;
  cin >> m;
  double inch = m*100/2.54;
  double feet = inch * 12;
  double mile = feet * 5280;
  cout <<"Here is "<< m << " meters converted to inches, feet, and miles."<< inch <<endl<< feet <<endl<< mile;
	return 0;
}
