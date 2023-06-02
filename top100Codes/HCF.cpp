// Highest Common Factor(HCF) Code
#include <iostream>
using namespace std;

/*The HCF or the Highest Common Factor of two numbers is
the largest common factor of two or more values.*/


int main(){

    //  Input consists of 2 integer.
    int n1,n2;
    cout << "Enter the both number " << endl;
    cin >> n1 >> n2;

    int hcf;
    for(int i = 1; i <= n1 / 2; i++){
        if(n1 % i == 0 && n2 % i == 0)
        hcf = i;
    }
    cout << "GCD of n1 & n2 is : " << hcf << endl;



    return 0;
}
