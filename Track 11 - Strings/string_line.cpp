//Program to show how to take spaces in a string

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;

    cout<<"Enter your name : ";
    // cin>>str;       //only takes upto a space bar is encountered.
    getline(cin, str);      //takes until ENTER key is encountered.
    // getline(cin, str, '$');      //takes input until specific character, for e.g. $

    cout<<"My name is : "<<str;

    return 0;
}