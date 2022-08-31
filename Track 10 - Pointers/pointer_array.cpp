//Program to show working of array and pointer.

#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;     //arr is a constant pointer too which always points to first element address of array.

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;

    //though recommeded practice is to use square bracket with array and *(ptr + 2) with pointer.
    cout<<*(arr + 2)<<endl;
    cout<<ptr[2]<<endl;

    return 0;
}