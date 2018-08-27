#include <iostream>
#include <cmath>
#include <string> 
using namespace std;
int main()
{
	double radius = 6;
	double pi = 3.1415;
	double half = 4/3 * pi;
	int hi = pow(radius, 3);
	double v = half * hi;
	cout << v << endl;
	return 0;
}