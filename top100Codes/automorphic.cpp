// automorphic number is a number whose square ends with the same digits as number itself
#include<iostream>
using namespace std;

// function to check power
int power(int n) {
    int base = n, exp = 2;
    int temp = 1;
    while(exp != 0){
    temp = temp * base;
    --exp;
  }
  return temp;

}

//  automorphic number fucntion
bool Automorphic(int n) {
    int rem = n % 10;
    int powNum = power(rem);

    return (n == powNum);
}

int main() {
    int automorNum;
    cout << "Enter a number to check if it is Automorphic or not " << endl;
    cin>> automorNum;

    if(Automorphic(automorNum)){
        cout << "Its a automorphic" << endl;
    }
    else{
        cout << "Its a not " << endl;
    }


    return 0;
}