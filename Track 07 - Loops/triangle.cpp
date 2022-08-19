//Program to print triangle pattern using stars.

#include<iostream>

using namespace std;

int main()
{
    int m, n;

    cout<<"Enter the rows : ";
    cin>>m;
    // cout<<"Enter the columns : ";
    // cin>>n;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}