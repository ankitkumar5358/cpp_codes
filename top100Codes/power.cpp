// top 100 codes
// power of a number
#include <iostream>
using namespace std;

int main() {
  int base, exp;
  cout << "Enter base and exponent value" << endl;
  cin >> base >> exp;

  int temp = 1;
  while(exp != 0){
    temp = temp * base;
    --exp;
  }
  cout << temp << endl;

  return 0;
}
