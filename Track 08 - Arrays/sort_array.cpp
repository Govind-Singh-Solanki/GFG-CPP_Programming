//Program to check if an array is sorted or not.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements to insert in array : ";
    cin>>n;

    int arr[n];

    bool flag = false;

    cout<<"Enter 5 numbers in order to see if they are sorted : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= arr[i+1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if(flag == true)
    {
        cout<<"Yes the array is Sorted!";
    }
    else
    {
        cout<<"No the array is not Sorted!";
    }

    return 0;
}