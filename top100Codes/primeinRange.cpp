// #include<iostream>
// using namespace std;

// void prime(int num)
// {
// int div=0;

// for(int i=1;i<=num;i++)
// {
// if(num%i==0)
// div++;
// }

// if(div==2)
// cout<<num<<endl;
// }
// int main()
// {
// cout<<" Enter range: " << endl;
// int lowerLimit, upperLimit;

// cin>>lowerLimit>>upperLimit;
// cout<<"Prime numbers between "<<lowerLimit<< " and "<<upperLimit<<"are : "<<endl;

// for(int i=lowerLimit;i<=upperLimit;i++)
// prime(i);
// return 0;
// }

#include <iostream>
using namespace std;

void isPrime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
        if (count == 2)
        cout << num << endl;
}

int main()
{

    int num1, num2;
    cout << "Enter numbers to define range of prime" << endl;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        isPrime(i);
    }
    return 0;
}
