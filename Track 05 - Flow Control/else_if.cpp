//Program to execute if-else if-else statements...

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n > 0)
    {
        cout<<"It is a Positive number!";
    }
    else if(n == 0)
    {
        cout<<"The number is Zero (0)!";
    }
    else
    {
        cout<<"It is a Negative number!";
    }

    return 0;
}