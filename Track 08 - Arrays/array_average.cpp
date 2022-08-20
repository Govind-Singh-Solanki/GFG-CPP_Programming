//Program to find average of an array.

#include<iostream>

using namespace std;

int main()
{
    
    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    float avg = (float(sum)/n);
    cout<<"Average of all elements of array = "<<avg;

    return 0;
}