//Program to showcase a simple 2-D array.

#include<iostream>

using namespace std;

int main()
{
    int m, n;

    cout<<"Enter the number of rows in array : ";
    cin>>m;
    cout<<"Enter the number of columns in array : ";
    cin>>n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = (i + j);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}