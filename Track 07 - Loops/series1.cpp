//Program to print numbers from 1 to n which are not multiple of x

#include<iostream>

using namespace std;

int main()
{
    int n, x;

    cout<<"Enter the limit upto which you want to print the numbers : ";
    cin>>n;
    cout<<"Enter the number whose multiples you dont want to print : ";
    cin>>x;

    for(int i = 1; i <= n; i++)
    {
        if((i%x) == 0)
        {
            continue;
        }
        cout<<i<<" ";
    }

    return 0;
}