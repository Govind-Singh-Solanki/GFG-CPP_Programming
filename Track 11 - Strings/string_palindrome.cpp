// Program to check whether a given string is palindrome or not.

#include <iostream>

using namespace std;

// Method 1
//  int main()
//  {
//      string s1, s2 = "";

//     cout<<"Enter a string : ";
//     getline(cin, s1);

//     for(int i = (s1.length() - 1); i >= 0; i--)
//     {
//         s2 = s2 + s1[i];
//     }

//     if(s1 == s2)
//     {
//         cout<<"Yes the string is Palindrome!";
//     }
//     else
//     {
//         cout<<"String is not Palindrome!";
//     }

//     return 0;
// }

// Method 2
int main()
{
    string s1;
    int start = 0;

    cout << "Enter a string : ";
    getline(cin, s1);

    int end = s1.length() - 1;

    while (start <= end)
    {
        if (s1[start++] != s1[end--])
        {
            cout << "String is not Palindrome!";
            return 0;
        }
    }
    cout << "String is palindrome";

    return 0;
}