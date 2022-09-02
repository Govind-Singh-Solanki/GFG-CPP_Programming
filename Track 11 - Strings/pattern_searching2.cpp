#include<iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    int j = 0;

    for(int i = 0; i <= (s1.length()-s2.length()); i++)
    {
        for(j = 0; j < s2.length(); j++)
        {
            if(s1[i+j] != s2[j])
            {
                break;
            }
        }
        if(j == s2.length())
        {
            cout<<"Pattern found at index : "<<i<<endl;
        }
    }

    return 0;
}