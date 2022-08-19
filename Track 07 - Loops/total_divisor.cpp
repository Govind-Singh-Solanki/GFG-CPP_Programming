//Program to find all the divisors of a given number.

#include<iostream>

using namespace std;

void totalDivisor(int n)
{
    for(int i = 1; i <= (n/2); i++)
    {
        if((n % i) == 0)
        {
            cout<<i<<", ";
        }
    }
    cout<<n;
}

int main()
{
    int num;
    
    cout<<"Enter the number : ";
    cin>>num;

    totalDivisor(num);

    return 0;
}