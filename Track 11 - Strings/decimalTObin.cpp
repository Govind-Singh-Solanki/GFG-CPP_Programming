// Program to comvert decimal to binary in string.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "";
    int x;

    cout << "Enter a decimal number to convert to binary : ";
    cin >> x;

    while(x > 0)
    {
        int rem = (x % 2);
        s1 = s1 + to_string(rem);   //converts the integer value to string type.
        x = x/2;
    }

    reverse(s1.begin(), s1.end());

    cout<<s1;

    return 0;
}