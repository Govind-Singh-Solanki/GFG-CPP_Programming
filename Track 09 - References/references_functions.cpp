//Program to show the usage of references.

#include<iostream>

using namespace std;

// Function without reference doesnt change the original value
// void fun(int y)
// {
//     y = y + 5;
// }

//Function with reference does change the original value as it points to same memory location
void fun(int &y)
{
    y = y + 5;
}

int main()
{
    int x = 10;
    fun(x);
    cout<<x;

    return 0;
}