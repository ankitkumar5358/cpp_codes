// Abundant number code
#include <iostream>
using namespace std;
  
/*A number n is said to be Abundant Number to follow
these condition
● the sum of its proper divisors is greater than the
number itself.
*/

int main(){
    //  Input consists of 1 integer.
    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    int temp = n, sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
        sum = sum + i;
    }
    if(sum > temp){
        cout << "Its a abundant number " << endl;
    }
    else{
        cout << "Its not a abundant number " << endl;
    }

    return 0;
}    