// Program to separate even and odd in vector.

#include <iostream>
#include <vector>

using namespace std;

vector<int> oddElements(int arr[], int n)
{
    vector<int> odd;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            odd.push_back(arr[i]);
        }
    }
    return odd;
}

vector<int> evenElements(int arr[], int n)
{
    vector<int> even;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even.push_back(arr[i]);
        }
    }
    return even;
}

int main()
{
    int n;

    cout<<"Enter the total number of elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements : ";

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int> v1 = oddElements(arr, n);
    vector<int> v2 = evenElements(arr, n);

    for(auto x : v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    for(auto y : v2)
    {
        cout<<y<<" ";
    }

    return 0;
}