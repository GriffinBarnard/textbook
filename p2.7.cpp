#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){

	cout << "give a radius";
	double r;
	cin >> r;
	double area = r*r*3.1415;
	double circ = (r+r)*3.1415;
	double sa = 4 *3.1415* (r*r);
	double v = 4/3 * 3.1415 * (r*r*r);
	cout<<v<<endl<<area<<endl<<circ<<endl<<sa<<endl;

	return 0;
}
