//Program to find sum of n natural numbers.

#include<iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout<<"Enter the number to which you want to find sum of natural numbers : ";
    cin>>n;

    //Not an effective way
    // for(int i = 1; i <= n; i++)
    // {
    //     sum = (sum + i);
    // }

    //Better solution
    sum = ((n*(n+1))/2);
    cout<<"Sum of "<<n<<" natural numbers is : "<<sum;

    return 0;
}