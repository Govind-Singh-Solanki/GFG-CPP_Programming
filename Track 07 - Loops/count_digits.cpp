//Program to count number of digits in a given number. 

#include<iostream>

using namespace std;

void countDigit(int n)
{
    int count = 0;
    while(n != 0)
    {
        count++;
        n /= 10;
    }
    cout<<count;
}

int main()
{
    int num;

    cout<<"Enter the number : ";
    cin>>num;

    countDigit(num);

    return 0;
}