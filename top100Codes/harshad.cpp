// Harshad number code
#include <iostream>
using namespace std;

/*Ex– Number is 21
it is divisible by own sum (1+2) of its digit(2,1)
So it is harshad number
Some other harshad numbers are 156,54,120 etc.
*/

int main(){
    //  Input consists of 1 integer.
    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    // Harshad number is a number that is divisible by the sum of its digits. We use a while loop statement with the following condition.

    int res = 0, temp = n;
    while(n != 0) {
        int rem = n % 10;
        res = res + rem;
        n /= 10;
    }

    if(temp % res == 0){
        cout << "Its a Harshad number " << endl;
    }
    else{
        cout << "Its not a Harshad number " << endl;
    }


    return 0;
}