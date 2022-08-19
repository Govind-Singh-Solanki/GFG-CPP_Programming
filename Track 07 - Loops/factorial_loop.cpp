//Program to find factorial of a number using loop

#include<iostream>

using namespace std;

int main()
{
    int n;
    int fact = 1;

    cout<<"Enter the number to find factorial of : ";
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<fact;

    return 0;
}