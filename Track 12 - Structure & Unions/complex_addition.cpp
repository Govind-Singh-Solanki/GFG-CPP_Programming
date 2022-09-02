//Program to add 2 complex number using structure.

#include<iostream>

using namespace std;

struct complex{
    int r;
    int i;
};

int main()
{
    complex c1, c2, c3;

    cout<<"Enter the real part of first complex number : ";
    cin>>c1.r;
    cout<<"Enter the imaginary part of first complex number : ";
    cin>>c1.i;

    cout<<"Enter the real part of second complex number : ";
    cin>>c2.r;
    cout<<"Enter the imaginary part of second complex number : ";
    cin>>c2.i;

    c3.r = (c1.r + c2.r);
    c3.i = (c1.i + c2.i);

    cout<<"Sum of both the complex number is : "<<c3.r<<" "<<"+"<<" "<<c3.i<<"i";

    return 0;
}