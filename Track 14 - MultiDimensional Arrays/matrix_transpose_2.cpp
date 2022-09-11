// Matrix Transpose

#include <iostream>
#include <vector>

using namespace std;

void matTranspose(vector<vector<int>> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i < j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
}

int main()
{
    int m;
    cout << "Enter the equal number of rows and columns in matrix : ";
    cin >> m;
    cout << endl;

    vector<vector<int>> arr;

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

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}