#include <iostream>
using namespace std;

bool isLeap(int n)
{
    if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int t;
    cout << "Enter testcases" << endl;
    cin >> t;

    if(t <= 0){
        exit;
    }

    while (t--)
    {
        int n;
        cout << "Enter a leap year" << endl;
        cin >> n;

        bool isL = isLeap(n);
        if (isL == true)
            cout << "Its a Leap" << endl;
        else
            cout << "Its not a Leap" << endl;
    }

    return 0;
}