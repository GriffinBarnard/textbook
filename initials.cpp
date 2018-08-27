#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(){
  string you;
  cout << "Please enter your name: ";
  cin >> you;
  string y = you.substr(0,1);
  string her;
  cout << "Please enter the name of the other person: ";
  cin >> her;
  string h = her.substr(0,1);
  cout << "Y'alls initials are: " << y+"&"+h << endl;
	return 0;
}