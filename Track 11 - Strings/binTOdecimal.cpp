#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    string s1;
    cout<<"Enter a binary string : ";
    cin>>s1;
    int x = 0;
    int n = 0;

    for(int i = s1.length()-1; i >= 0; i--)
    {
        x = x + ((int)(s1[i] - '0')*pow(2, n));
        n++;
    }

    cout<<x;

    return 0;
}