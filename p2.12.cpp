#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){
  cout<<"please enter your phone number"<<endl;
  string num;
  cin>>num;
  string form = "("+num.substr(0,3)+") " + num.substr(3, 3) + "-" + num.substr(6,4);
  cout << form << endl;
	return 0;
}
