//Program to find nth term of a GP.

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, a, r;
    cout<<"Enter the first term of G.P : ";
    cin>>a;
    cout<<"Enter the common ratio of G.P : ";
    cin>>r;
    cout<<"Enter the term which you need to find : ";
    cin>>n;

    int ans = (a*pow(r, (n-1)));
    cout<<n<<"th term is : "<<ans;

    return 0;
}