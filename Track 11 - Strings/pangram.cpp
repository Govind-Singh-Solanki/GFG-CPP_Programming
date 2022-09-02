// Program to check whether a given sentence is Pangram or not

#include <iostream>
#include <string>

using namespace std;

void pangram(const string &s)
{
    bool flag = false;
    int visited[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char x = s[i];
        if (x >= 'a' && x <= 'z')       //x-a increases the value from 0 to 1 at a's index using ASCII value conecept
        {
            visited[x - 'a']++;
        }
        if (x >= 'A' && x <= 'Z')
        {
            visited[x - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (visited[i] == 0)
        {
            flag = false;       //if theres a single character which has 0 in the array 
            break;              //means that there are not all the 26 characters of English
        }
        else
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        cout << "String is Pangram!";
    }
    else
    {
        cout << "String is not Pangram!";
    }
}

int main()
{
    string s;

    cout << "Enter a string : ";
    getline(cin, s);

    pangram(s);

    return 0;
}