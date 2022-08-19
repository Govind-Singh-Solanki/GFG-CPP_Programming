//Program to print Fibonacci Series.

#include<iostream>

using namespace std;

int fibo(int n)
{
    // int a = 1;
    // int b = 1;
    // int sum = 0;

    // cout<<"1 1 ";

    // for(int i = 2; i < n; i++)
    // {
    //     sum = a + b;
    //     cout<<sum<<" ";
    //     a = b; 
    //     b = sum;
    // }

    if((n == 1) || (n == 0))
    {
        return n;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }

}

int main()
{
    int n, i = 1;

    cout<<"Enter the number you want to print Fibonacci Series upto : ";
    cin>>n;

    while(i <= n)
    {
        cout<<fibo(i)<<" ";
        i++;
    }

    return 0;
}