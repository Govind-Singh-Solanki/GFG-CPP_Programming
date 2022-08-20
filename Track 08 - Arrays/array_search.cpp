// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        bool flag = false;
        // Your code here
        static int i = 0;
        for (i = 0; i < N; i++)
        {
            if (arr[i] == X)
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int sizeOfArray;
    cout<<"Enter the size of the array : ";
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    int x;

    cout<<"Enter the elements of array : ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }

    cout<<"Enter the element to search for : ";
    cin >> x;
    Solution ob;
    cout << ob.search(arr, sizeOfArray, x) << endl; // Linear search

    return 0;
}
// } Driver Code Ends