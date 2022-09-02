// Program to check whether given 2 strings are anagram or not!

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

bool isAnagram(string a, string b)
{
    // Your code here
    int n1 = a.length();
    int n2 = b.length();

    if (n1 != n2)
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n1; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    string s1, s2;

    cout << "Enter string 1 : ";
    cin >> s1;
    cout << "Enter string 2 : ";
    cin >> s2;

    // int n = s1.length();
    int res = isAnagram(s1, s2);

    if(res == 0)
    {
        cout<<"String is not Anagram!";
    }
    else
    {
        cout<<"String is Anagram!";
    }

    return 0;
}