//Program to show R value reference working.

#include<iostream>

using namespace std;

int main()
{
    string s1 = "Govind ", s2 = "Singh";
    string &&s3 = s1 + s2;      //withour r value reference it wont be able to refer to result of s1+s2
    s3 = "Welcome " + s3;
    cout<<s3;

    return 0;
}