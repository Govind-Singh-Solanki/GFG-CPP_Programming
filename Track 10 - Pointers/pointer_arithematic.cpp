// Program to show arithematic operations available for pointer

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};
    int *p = a;
    cout << p << " " << *p << "\n";
    p++;
    cout << p << " " << *p << "\n";
    p--;
    cout << p << " " << *p << "\n";
    p += 2;
    cout << p << " " << *p << "\n";
    p -= 2;
    cout << p << " " << *p << "\n";
    auto p2 = p;
    p += 3;
    cout << p << " " << *p << "\n";
    cout << p - p2;     //difference between 2 pointers give number of elements between them
    return 0;
}