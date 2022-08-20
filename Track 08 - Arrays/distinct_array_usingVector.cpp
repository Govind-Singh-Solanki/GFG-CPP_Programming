// Program to find distinct elements in an array using vector.

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here
        unordered_map<int, pair<int, int>> mp;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (mp.find(M[i][j]) != mp.end())
                {
                    if (mp[M[i][j]].second != i)
                    {
                        mp[M[i][j]].first++;
                        mp[M[i][j]].second = i;
                    }
                }
                else
                {
                    mp[M[i][j]].first++;
                    mp[M[i][j]].second = i;
                }
            }
        }
        int ans = 0;
        for (auto it : mp)
        {
            if (it.second.first == N)
                ans++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for (int i = 0; i < N * N; i++)
            cin >> M[i / N][i % N];

        Solution ob;
        cout << ob.distinct(M, N) << "\n";
    }
    return 0;
} // } Driver Code Ends