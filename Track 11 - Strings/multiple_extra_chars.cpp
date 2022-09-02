// Program to print multiple extra characters with comparison to 2 strings

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    int count[256] = {0};

    cout << "Enter string 1 : ";
    cin >> s1;
    cout << "Enter string 2 : ";
    cin >> s2;

    for (auto x : s2)
    {
        count[x]++;
    }
    for (auto x : s1)
    {
        count[x]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            for (int j = 1; j <= count[i]; j++)
            {
                cout << (char)i;
            }
        }
    }
    return 0;
}