//Using union to convert decimal to binary.

#include<iostream>

using namespace std;

union convert{
    int x;
    char bin[4];
};

int main()
{
    convert a;
    a.x = 512;
    // cout<<"Enter a decimal number : ";
    // cin>>a.x;

    cout<<(int)a.bin[0]<<(int)a.bin[1]<<(int)a.bin[2]<<a.bin[3];
    
    return 0;
}