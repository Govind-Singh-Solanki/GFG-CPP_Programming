//Program to show allocating dynamic memory.

#include <iostream>
using namespace std;

int main() {
    static int a;
    int b, c;
    int *ptr = new int[5];      //creates an array of int type with 5 elements in HEAP.
    cout << *(ptr+2)<<endl;       //initially all 5 elements of dynamically allocated array are 0.

    *(ptr+2) = 10;
    cout << *(ptr+2);

    return 0;
}