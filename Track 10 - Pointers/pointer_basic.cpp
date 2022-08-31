//Basics of Pointer

#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    int *ptr;
    ptr = arr;

    cout<<sizeof(ptr);

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++)
    {
        *ptr = *ptr + 10;
        ptr++;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    

    return 0;
}