//Program to find maximum element in an array.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
        }
    }

    cout<<"Maximum element in the array is : "<<max;
    

    return 0;
}