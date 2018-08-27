#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
cout << "Please enter the price for a six-pack: ";
double pack_price;
cin >> pack_price;
cout << "Please enter the volume for each can (in ounces): ";
double can_volume;
cin >> can_volume;
const double CANS_PER_PACK = 6;
double pack_volume = can_volume * CANS_PER_PACK;
double price_per_ounce = pack_price / pack_volume;
cout << fixed << setprecision(2);
cout << "Price per ounce: " << price_per_ounce << endl;

	return 0;
}