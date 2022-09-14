//Program showing copy constructor

#include<iostream>

using namespace std;

class Test
{
    int *ptr;
    public :
    //constructor made by developer
    Test(int x)
    {
        ptr = new int(x);
    }
    //copy constructor, if not made default copy constructor will be called and output will be different
    Test(const Test &t)
    {
        int val = *(t.ptr); //t.ptr gives the address of 
        ptr = new int(val);
    }
    void set(int a)
    {
        *ptr = a;
    }
    void print()
    {
        cout<<*ptr<<endl;
    }
};

int main()
{
    Test t1(10);    //object t1 created of class Test and hence developer constructor will be called.
    Test t2(t1);    //object t2 made from already existing object t1 and hence default copy constructor will be called.

    t2.set(20); //default copy constructor makes shallow copy and hence takes address of t1 and changes the value to both objects
    t1.print();
    t2.print();
    
    return 0;
}