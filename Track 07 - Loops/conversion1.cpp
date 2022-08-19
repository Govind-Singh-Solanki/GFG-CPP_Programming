//Program to convert binary number to decimal

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number in binary format : ";
    cin>>n;

    int count = 0;
    int sum = 0;
    while(n != 0)
    {
        int x = n % 10;
        sum = sum + (x*pow(2, count));
        count++;
        n = n/10;
    }
    cout<<"Number in decimal format : "<<sum;
    return 0;
}