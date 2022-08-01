//Program to swap 2 numbers.

#include<iostream>

using namespace std;

void utility(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    // cout<<a<<" "<<b;
}

int main()
{
    int a = 10;
    int b = 20;

    // int temp;

    cout<<a<<" "<<b<<endl;

    swap(a, b);

    // temp = a;
    // a = b;
    // b = temp;

    cout<<a<<" "<<b;
    // cout<<"Welcome \"Govind\"";      //trying the escape sequence to print double quotes 

    return 0;
}