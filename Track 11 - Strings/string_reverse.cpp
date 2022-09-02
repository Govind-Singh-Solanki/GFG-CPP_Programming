//Program to reverse a string.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str, str2 = "";

    cout<<"Enter a string : ";
    getline(cin, str);

    for(int i = (str.length() - 1); i >= 0; i--)
    {
        str2 = str2 + str[i];
    }

    cout<<"Original String : "<<str<<endl;
    cout<<"Reversed String : "<<str2;

    return 0;
}

// int main()
// {
//     string str, str2 = "";

//     cout<<"Enter a string : ";
//     getline(cin, str);

//     int n = (str.length()-1);
//     while(n >= 0)
//     {
//         str2 = str2 + str[n];
//         n--;
//     }

//     cout<<"Original String : "<<str<<endl;
//     cout<<"Reversed String : "<<str2;

//     return 0;
// }