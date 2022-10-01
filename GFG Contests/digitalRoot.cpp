//Program to find digital roots of a number. Digital Root is the sum of numbers until it becomes a single digit number.

#include<iostream>

using namespace std;

int digRoot(int n)
{
    int sum = 0;
    //Your code here
     
    while(n != 0)
    {
        int y = (n % 10);
        sum = sum + y;
        n = (n/10);
    }
    if(sum >= 10)
    {
        return digRoot(sum);
    }
    else{
        return sum;
    }
    
}

int digitalRoot(int n)
{   
    int y = digRoot(n);
    return y;
}

int main()
{
    int n;
    cin>>n;
    int z = digRoot(n);
    cout<<z;
    return 0;
}