//program showing vector traversal

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //Method - 1
    // vector<int> v;
    // int n = 5, y;
    // cout<<"Enter the elements of vector : ";
    // for(int i = 0; i < n; i++)
    // {
    //     cin>>y;
    //     v.push_back(y);
    // }

    // for(auto x : v)
    // {
    //     cout<<x<<" ";
    // }

    //Method - 2
    // int n = 3, x = 7;
    // vector<int> v(n, x);

    // for(auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout<<(*it)<<" ";
    // }

    //Method - 3
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr, arr + n);
    for(auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout<<(*it)<<" ";
    }

    return 0;
}