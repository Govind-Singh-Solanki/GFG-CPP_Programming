//Program to find nth term of an AP.

#include<iostream>

using namespace std;

int main()
{
    int n, a, d;
    cout<<"Enter the first term of A.P : ";
    cin>>a;
    cout<<"Enter the common difference of A.P : ";
    cin>>d;
    cout<<"Enter the term which you need to find : ";
    cin>>n;

    int ans = (a + ((n-1)*d));
    cout<<n<<"th term is : "<<ans;

    return 0;
}