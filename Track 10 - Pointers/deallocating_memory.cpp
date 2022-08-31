//Program showing deallocation of dynamically allocated memory.

#include <iostream>
using namespace std;

int main() {
    static int a;
    int b, c;
    int *ptr = new int[5];
    *(ptr+2) = 10;
    cout<<*(ptr+2)<<endl;
    delete[] ptr;       //memory is freed here using delete.
    ptr = NULL;
    cout<<*ptr;     //prints nothing as it is null.
}