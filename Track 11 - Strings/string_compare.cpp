//Program to show usage of string comparison

#include<iostream>

using namespace std;

int main()
{
    string s2 = "abc";
    string s1 = "bcd";

    if(s1 == s2)
    {
        cout<<"Same";
    }
    else if (s1 < s2)
    {
        cout<<"Smaller";
    }
    else
    {
        cout<<"Greater";
    }

    return 0;
}