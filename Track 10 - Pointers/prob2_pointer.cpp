// Practice Problem 2 Pointer

#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20};
    int *p = a;

    //postfix ++ has higher precedence then * so it is evaluated first and then dereferenced.
    //p++ gives address of next element and the value is dereferenced at that address.
    *p++;
    cout << a[0] << " "
         << a[1] << "\n"
         << *p;
    return 0;
}