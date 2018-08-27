#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
  double num;
	cout << "Type a number: ";
  cin >> num;
  cout << "The square, cube, and fourth powers of your number are: "<< endl << num*num << endl << num*num*num<< endl << pow(num,4);

	return 0;
}
