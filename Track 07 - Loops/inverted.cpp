//Program to print inverted triangle.

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the height of triangle : ";
    cin>>n;

    //changes the row 
    for(int i = 0; i < n; i++)
    {
        //prints the spaces first
        for(int j = 1; j < (n-i); j++)
        {
            cout<<" ";
        }
        //prints the star next
        for(int k = 0; k <= i; k++)
            {
                cout<<"*";
            }
        cout<<endl;     //enters new line
    }

    return 0;
}