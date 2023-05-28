// Strong number code, e.g 145
// it means the sum of the factorial of the digits is equal to the number itself. 1, 2, 145, and 40585 are some examples of Strong numbers.
#include<iostream>
using namespace std;

// function to check factorial of a number
int factorial(int n) {
    if(n <= 1)
    return 1;
    else
    return n * factorial(n - 1) ;
}

// function to check strong number

int isStrong(int n) {
    int temp = n;
    int factSum = 0;

    while(temp != 0){
        int rem = temp % 10;
        factSum = factSum + factorial(rem);
        temp /= 10;
    }
    return (n == factSum);
}

int main(){
    // input a number
    int factNum;
    cout << "Enter a digit to check is it strong or not " << endl;
    cin >> factNum;
    
    
    if(isStrong(factNum))
        cout << "It is a strong number." << endl;
    else
        cout << "It is not a strong number." << endl;

}
