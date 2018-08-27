#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){
	int numo;
	int numt;
	cout << "Type two numbers here: ";
	cin >> numo;
	cin >> numt;
	cout << "The distance, and the maximum and minimum numbers will be shown here" << endl << abs(numo - numt) <<endl<< min(numo, numt) << endl << max(numo, numt)<<endl;


	return 0;
}
