//Program to check divisibility of numbers by 2, 3 and 11.

#include<iostream>

using namespace std;

void isDivisibleByPrime(int n){
    
    // Your code here
    if((n%2)==0 && (n%3)==0 && (n%11)==0)
    {
        cout<<"Eleven";
    }
    else if((n%2)==0 && (n%3)==0) 
    {
        cout<<"Three";
    }
    else if((n%2)==0 && (n%11)==0)
    {
        cout<<"Eleven";
    }
    else if((n%3)==0 && (n%11)==0)
    {
        cout<<"Eleven";
    }
    else if(n%2 == 0)
    {
        cout<<"Two";
    }
    else if(n % 3 == 0)
    {
        cout<<"Three";
    }
    else if(n % 11 == 0)
    {
        cout<<"Eleven";
    }
    else
    {
        cout<<"-1";
    }
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    isDivisibleByPrime(n);
    
    return 0;
}