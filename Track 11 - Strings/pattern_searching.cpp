// Program to check whether a given pattern is present in a string or not!

#include <iostream>

using namespace std;

void patternSearching(string s1, string s2)
{
    int found = s1.find(s2);

    if (found == string::npos)
    {
        cout << "Pattern not present in the given text!";
    }
    else
    {
        while (found != string::npos)
        {
            cout << "Pattern found at index : " << found << endl;
            found = s1.find(s2, found + 1);     //found + 1 is the index from where the find function starts searching
        }
    }
}

int main()
{
    string s1, s2;

    cout << "Enter a text to find pattern in : ";
    cin >> s1;
    cout << "Enter the pattern to search for : ";
    cin >> s2;

    patternSearching(s1, s2);

    return 0;
}