//other ways to initialize array.

//1. Double Pointer
#include<iostream>

using namespace std;

int main()
{
    int m = 3, n = 2;

    int **arr;
    arr = new int*[m];
    for(int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = (i + 5);
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}