//program to display a list of small elements than the given number.

#include<iostream>
#include<vector>

using namespace std;

vector<int> listSmaller(int arr[], int n, int k)
{
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= k)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> v;
    int n, x, k;

    cout<<"Enter the total number of elements in array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number which you want all the number smaller than : ";
    cin>>k;

    v = listSmaller(arr, n, k);

    for (auto x : v)
    {
        cout<<x<<" ";
    }
    
    
    return 0;
}