//Program for range based for loop with references.

#include<iostream>

using namespace std;

int main()
{
    //withour reference, it wont change here

    // int arr[] = {10, 20, 30, 40};

    // for(auto x : arr)
    // {
    //     x = x*2;
    // }

    // for(auto x : arr)
    // {
    //     cout<<x<<" ";
    // }

    //with reference, will change here

    int arr[] = {10, 20, 30, 40};

    for(auto &x : arr)
    {
        x = x*2;
    }

    for(auto x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}