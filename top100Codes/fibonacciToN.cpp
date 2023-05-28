#include <iostream>
using namespace std;

int main() {

    // code fibonacci series from 1 to n
    // fibonacci means 0,1,1,2,3,5,8,13,21.... 
    // sum of current term is =  previous + prevoius (previous ) number

    int n = 6;

    int first = 0, second = 1;
    cout << first << " " << second  << " ";

    for(int i = 1; i < n ; i++) {
        int nextTerm = first + second;
        first  = second;
        second = nextTerm;
        cout << nextTerm << " ";
    }
    

    return 0;
}