//Program to show usage of find function in string.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "geeksforgeeks";

    // int res = str.find("eek");      //always returns index of first occurance
    int res = str.find("xyz");      //if not found then returns string::npos

    if(res == string::npos)
    {
        cout<<"Not Present";
    }
    else
    {
        cout<<"Present at index : "<<res;
    }

    return 0;
}