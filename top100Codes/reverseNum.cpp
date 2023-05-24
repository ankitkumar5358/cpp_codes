// prime number
#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number to reverse" << endl;
    cin >> num;

    int result = 0;
    while(num > 0){
        int rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
    cout << result ;
    



    return 0;
}