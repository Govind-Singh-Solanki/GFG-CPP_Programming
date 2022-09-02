//Program to show multiple ways of traversing a string.

#include<iostream>

using namespace std;

int main()
{
    string str = "govind";

    //Method 1
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i];    
        // cout<<++str[i];     //increments each element by 1 in ASCII value so we get the immediate next character as O/P
    }
    cout<<endl;

    //Method 2
    for(auto x : str)
    {
        cout<<x;        //we will use reference operator($) here to change the string directly
    }
    cout<<endl;

    //Method 3
    for(auto it = str.begin(); it != str.end(); it++)
    {
        // cout<<(*it);        
        cout<<++*(it);        //its already a pointer so we can change the value using pointer concept as its stores the address.
    }

    return 0;
}