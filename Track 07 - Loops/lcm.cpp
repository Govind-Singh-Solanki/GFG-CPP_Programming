//Program to find LCM of 2 numbers.

#include<iostream>

using namespace std;

int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void lcm(int a, int b)
{
    int x = max(a, b);

    for(int i = x; i <= (a*b); i++)
    {
        if(((i % a) == 0) && ((i % b) == 0))
        {
            cout<<i;
            break;
        }
    }
}

int main()
{
    int a, b;

    cout<<"Enter both number of which LCM is to be found : ";
    cin>>a>>b;

    lcm(a, b);

    return 0;
}