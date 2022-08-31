//Pointer usage in Function

#include<iostream>

using namespace std;

void fun(int *a)
{
    *a = *a + 25;
}

int main()
{
    int x = 20;
    fun(&x);
    cout<<x;

    return 0;
}