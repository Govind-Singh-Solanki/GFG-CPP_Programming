//Program to find GCD of 2 numbers.

#include<iostream>

using namespace std;

int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
    return b;
    }
}

void gcd(int a, int b)
{
    int x = min(a, b);
    int ans = 1;

    for(int i = 1; i <= x; i++)
    {
        if(((a % i) == 0) && ((b % i) == 0))
        {
            ans = i;
        }
    }
    cout<<"GCD of "<<a<<" & "<<b<<" is : "<<ans;
}

int main()
{
    int a, b;

    cout<<"Enter both numbers to find GCD of : ";
    cin>>a>>b;
    // cin>>b;

    gcd(a, b);

    return 0;
}