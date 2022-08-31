// practice problem pointer.

#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20};
    int *p = a;
    ++*p; //++ and * has equal precedence so when they both are on LHS, it happens right to left order.
          //*p is evaluated first and whatever value it gives is incremented by 1.

    cout << a[0] << " "
         << a[1] << "\n"
         << *p;
    return 0;
}