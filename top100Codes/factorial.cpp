#include <iostream>
using namespace std;

int fact(int n) {
    int fact = 1;
    for(int i = n; i > 0; i--){
        fact *= i;
    }
    return fact;
    // if(n <= 0)
    // return 1;
    // else
    // return n * fact(n-1);
}

int main() {
    // code of factorial
    // factorial means , 5! = 5 * 4 * 3 * 2 * 1, stop at 1
    int n = 5;

    cout << "Factorial is : " << fact(n) << endl;

    return 0;
}