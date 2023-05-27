#include <iostream>
using namespace std;

bool isArmstrong(int num) {
  int sum = 0;
  int temp = num;
  while (temp > 0) {
    int rem = temp % 10;
    sum = sum + rem * rem * rem;
    temp = temp / 10;
  }
  if (num == sum) {
    return true;
  } else {
    return false;
  }
}

int main() {
    // code to check or find armstrong in a given range
    int num1, num2;
    cout << "Enter the start and end limit to find armstrong's range" << endl;
    cin >> num1 >> num2;

    for(int i = num1; i <= num2; i++){
    if(isArmstrong(i)){
        cout << i << endl;
        }
    }

    return 0;
}