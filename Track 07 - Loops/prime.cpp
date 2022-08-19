//Program to check whether a number is Prime or not.

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number : ";
    cin>>n;

    bool flag = true;

    for(int i = 2; i <= (n/2); i++)
    {
        if((n % i) == 0)
        {
            flag = false;
            break;
        }
    }

    if(flag == true)
    {
        cout<<"Prime!";
    }
    else
    {
        cout<<"Not Prime!";
    }

    return 0;
}