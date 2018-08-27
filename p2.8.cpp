#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){
	cout << "Please list the sides of a rectangle:"<<endl;
	int sideo;
	int sidet;
	int sideh;
	int sidef;
	cin>>sideo;
	cin>>sidet;
	cin>>sideh;
	cin>>sidef;
	int p = sideo+sidet+sideh+sidef;
	int a = sideo*sideh;
	cout << "the perimeter and area of a rectangle is :"<<endl <<p<<endl<<a<<endl;
	return 0;
}
