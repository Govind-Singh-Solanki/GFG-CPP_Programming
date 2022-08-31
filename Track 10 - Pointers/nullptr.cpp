// Program to show usage of nullptr.

#include <iostream>
using namespace std;

void f(int x)
{
    cout << "Integer" << '\n';
}
void f(int *ptr)
{
    cout << "Pointer" << '\n';
}
int main()
{
    // f(NULL);
    f(0);
    f(nullptr);
    return 0;
}