// Matrix Transpose

#include <iostream>
#include <vector>

using namespace std;

void matTranspose(vector<vector<int>> &arr, int n)
{
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        vector<int> v2;
        for (int j = 0; j < n; j++)
        {
            v2.push_back(arr[j][i]);
        }
        ans.push_back(v2);
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int m;
    cout << "Enter the equal number of rows and columns in matrix : ";
    cin >> m;

    vector<vector<int>> arr;
    // vector<vector<int>> arr2;

    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.push_back(x); // taking element input in the 1-D vector
        }
        arr.push_back(v); // pushing the 1-D vector inside 2-D vector to make it 2-D.
    }

    // matrix printing before transpose

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    matTranspose(arr, m);

    // for (int i = 0; i < arr2.size(); i++)
    // {
    //     for (int j = 0; j < arr2[i].size(); j++)
    //     {
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}