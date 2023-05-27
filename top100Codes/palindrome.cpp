#include <iostream>
using namespace std;

int main() {

  // palindrome number code
  // e.g 1221, 12321, 14441,1001;
  // take input of a number, reverse and compare with original
  int n;
  cout << "Enter a number to check " << endl;
  cin >> n;

  int res = 0, temp = n, rem;
  
  while(n != 0) {
  rem = n % 10;
  res = res * 10 + rem;
   n = n / 10;
  
  }
    if(temp == res){
        cout << "It's a palindrome" << endl;
    }
    else{
        cout << "Its not palindrome" << endl;
    }
    
  
  return 0;
}