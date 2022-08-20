//Program to find sum of an array.

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter number of elements to be entered in array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array : ";

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = (sum + arr[i]);
    }

    cout<<"Sum of all the elements of array is : "<<sum;

    return 0;
}