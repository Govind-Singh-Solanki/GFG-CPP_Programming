// Program to show why not to use sizeof() operator in a secondary function and rather pass it in arguments.

#include <iostream>

using namespace std;

// if we dont pass the size in arguments
void fun(int *arr)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// passing array size in argument
//  void fun(int *arr, int n)
//  {
//      // int n = sizeof(arr)/sizeof(arr[0]);
//      for(int i = 0; i < n; i++)
//      {
//          cout<<arr[i]<<" ";
//      }
//  }

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    fun(arr);
    // fun(arr, n);

    return 0;
}