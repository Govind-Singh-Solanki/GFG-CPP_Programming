// Program to find one extra character in string.

#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    int count[256] = {0};

    cout << "Enter string 1 : ";
    cin >> s1;
    cout << "Enter string 2 : ";
    cin >> s2;

    // cout<<s1<<" "<<s2;

    // sorting both strings.
    //  sort(s1.begin(), s1.end());
    //  sort(s2.begin(), s2.end());

    // int n = s1.length();
    // char x;
    // int i = 0;

    // for (i = 0; i < n; i++)
    // {
    //     if(s1[i] != s2[i])
    //     {
    //         // x = s2[i];
    //         cout<<s2[i];
    //         break;
    //     }
    // }
    // if( i == n)
    // {
    //     cout<<s2[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(s1[i] != x)
    //     {
    //         cout<<x;
    //     }
    //     else
    //     {
    //         cout << s2[n];
    //     }
    // }

    // using a count[] array.
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
        if (count[i] == 1)
        {
            cout << (char)i;
        }
    }

    // Bitwise XOR operator.
    //  int n = s1.length();
    //  int res = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     res = res ^ s1[i] ^ s2[i];
    // }
    // res = res ^ s2[n];

    // cout<<(char)res;

    return 0;
}