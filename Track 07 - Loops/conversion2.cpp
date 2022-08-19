// Program to convert Decimal to Binary

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[10], n;

    // cout<<sizeof(arr);     gives total size of array for total elements

    cout<<"Enter the number : ";
    cin>>n;

    //storing the binary of each digit in array
    for(int i = 0; i < 10; i++)
    {
        arr[i] = (n % 2);
        n = n/2;
    }

    //reversing the array to get the actual binary value
    int x = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, arr+x);

    for(int i = 0; i < 10 ; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}
