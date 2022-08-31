//Program to show static variable are better in dynamic memory allocation as they stay fir lifetime of a program.

#include <iostream>
using namespace std;

//function having local variable might return result as expected but its not good practice.
int *fun()
{
    int a = 10;      //allocated on stack
    int *ptr = &a;
    return ptr;
}

//function having static variable will work as expected.
// int *fun()
// {
//     int *ptr = new int;     //allocated on heap.
//     *ptr = 10;
//     return ptr;
// }

int main() 
{
    int x, y;
    cout << *fun();
    return 0;
}