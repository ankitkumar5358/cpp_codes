#include <iostream>
using namespace std;

/*Two numbers are said to be friendly pairs if they have a
common abundancy index. Or, the ratio between the sum of
divisors of a number and the number itself
*/

int main(){

    //  Input consists of 2 integer.
    int n1,n2;
    cout << "Enter the both number " << endl;
    cin >> n1 >> n2;

    int sum1 =  0, sum2 = 0;
    for(int i = 1; i < n1; i++){
        if(n1 % i == 0)
        sum1 = sum1 + i;
    }
    
    for(int i = 1; i < n2; i++){
        if(n2 % i == 0)
        sum2 = sum2 + i;
    }

    // cout << n1 << " " <<  n2 << " " << sum1  << " " << sum2 << " ";

    // Check if the sum of the divisors of both numbers is equal to each other.
    if(sum1 == n2 && sum2 == n1) {
        cout << "Its a Friendly pair or Amicable numbers" << endl;
    }
    else{
        cout << "Its not a Friendly pair  or Amicable numbers" << endl;
    }

    return 0;
}