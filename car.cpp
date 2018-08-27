#include <iostream>
using namespace std;
int main()
{
	int car1pp = 25000;
	double car1op = 15000/50 * 4 * 10;
	double car1total = car1pp + car1op;
	int car2pp = 20000;
	double car2op = 15000/30 * 4 * 10;
	double car2total = car2pp + car2op;
	if (car1total < car2total){
		cout << car1total << endl;
	} else{
		cout << car2total << endl;
	}
	
}