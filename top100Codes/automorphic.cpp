// code of automorphic number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to check " << endl;
    cin >> n;

    int sqN = n * n;
    int res = 0, temp = sqN;
    
    /*An automorphic number is a number whose square ends with the same digits as number itself. e.g, 5=(5)2=25 */
    while(n != 0){
        if( n % 10 != sqN % 10){
            res = 1;
            break;
        }
        n = n / 10;
        sqN = sqN / 10;
    }
    if(res == 1){
        cout << "Its not a automorphic number" << endl;
    }
    else{
        cout << "Its a automorphic number" << endl;
    }

    return 0;
}