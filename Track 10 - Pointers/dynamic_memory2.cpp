// Program showing how to free a memory but still have the address of that memory for future use.

#include <iostream>
using namespace std;

int *fun()
{
    int *ptr = new int;
    *ptr = 10;
    return ptr;
}

int main()
{
    int x, y;
    cout << *fun() << endl;
    int *ptr = fun();       //memory address is stored in ptr

    delete ptr;
    cout << *ptr << endl;       //wont print 0 but a garbage value at the memory address is not stored so it gives a random value.
}