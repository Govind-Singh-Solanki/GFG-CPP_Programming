//Program to print numbers in matrix form.

#include<iostream>

using namespace std;

int main()
{
    int a, b;

    cout<<"Enter number of rows : ";
    cin>>a;
    cout<<"Enter number of columns : ";
    cin>>b;

    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}