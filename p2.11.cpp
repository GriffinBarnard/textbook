#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main(){
  cout<<"give a total number of books and the price for them"<< endl;
  int num;
  double tot;
  cin>>num;
  cin>>tot;
  double tax = tot*1.075;
  int ship = 2*num;
  double total = tax+ship;
  cout<<"The price of the order is: "<<endl<<total<<endl;
	return 0;
}
