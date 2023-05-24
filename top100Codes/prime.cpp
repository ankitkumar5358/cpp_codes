// prime number
#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Enter testcase" << endl;
    cin >> t;
    while(t--) {
    int n;
    cout << "Enter a number to find prime " << endl;
    cin >> n;
    

    int count = 0;
    for(int i = 2; i < n; i++) {
        if(n % i == 0){
        count++;
        }
    }
    if(count == 0)
    std::cout << "Prime" << endl;
    else
    std::cout << "Not Prime" << endl;
    }

    return 0;
}