// top 100 codes
// power of a number
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a  value to find its factor" << endl;
  cin >> n;

    if(n <= 0 )
    cout<< "Factors not availabel for <= 0 values " << endl;

    int count  = 0;
    for(int i = 1; i <= n; i++ ){
        if(n % i == 0)
        cout << i << " ";
        else
        count++;

    }
    
  return 0;
}
