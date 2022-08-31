//Program to show how to assign whole array as a block to pointer.

#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    int (*ptr2)[4] = &arr;

    cout<<*ptr<<endl;
    cout<<*(ptr + 2)<<endl;
    cout<<*(ptr2 + 1)<<endl;       //single star will print address of array element
    cout<<*(ptr2 + 2)<<endl;       //single star will print address of array element
    cout<<**ptr2<<endl;        
    cout<<*(*ptr2 + 2)<<endl;        

    return 0;
}