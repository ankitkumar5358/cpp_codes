#include <iostream>
using namespace std;

bool isPerfect(int n){
    int sum = 0;
    for(int i  = 1; i< n; i++ ){
        if(n % i == 0)
        sum = sum + i;
    }
    return (sum == n);
}

int main() {

    int perfectNum;
    cout << "Enter a number to check if it is perfect or not " << endl;
    cin >> perfectNum;

    if(isPerfect(perfectNum))
        cout << "Its a perfect number " << endl;
    else
        cout << "Its  not a perfect number " << endl;
   
    return 0;
}