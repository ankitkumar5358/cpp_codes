#include <iostream>
using namespace std;

int main() {
    // armstrong number code
    // armstrong is sum of cube of digits in a number , e.g 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153

    int n;
    cout << "Enter a number to check armstrong" << endl;
    cin >> n;

    int result = 0, temp = n, rem;
    while(n != 0){
        rem = n % 10;
        result = result + rem * rem * rem;
        n = n / 10;
    }
    if(result == temp) {
        cout << "Its an armstrong " << endl;
    }
    else{
        cout << "Its not an armstrong" << endl;
    }


    return 0;
}