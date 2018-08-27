#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	// make a monthly charge of $29.95. If minutes exceed 300, then add $.45 for every minute
	int minute;
	cout << "How many minutes did you spend on the phone: "<< endl;
	cin >> minute;
	// in a regular function this would be x and x would be the argument.
	double charge = 29.95;
	// the amount the customer is charged and then has to pay
	int x = 0;
	// this is used so that later so can find out how many minutes over 300 minutes they went.
	if (minute > 300){
		x = minute - 300;
		// this is where i find out
		charge = charge + (x * .45);
		//adds the additional charges to base charges
		cout << "You have been charged $"<< static_cast<int>(charge*1.125+.5) << endl;
		//outputs the charge plus the tax rate
	} else{
		cout << "You have been charged $"<< charge * 1.125 +.5 << endl;
	}
	return 0;
}
