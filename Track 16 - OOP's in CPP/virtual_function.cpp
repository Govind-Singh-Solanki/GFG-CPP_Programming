//Virtual Functions in cpp

#include<iostream>

using namespace std;

class Base
{
    public :

    //if we dont use virtual keyword, it will call the function of pointer object class.
    // void print()
    // {
    //     cout<<"Base\n";
    // }

    //if we use virtual then only the call is made to the pointer object to which it is pointing.
    virtual void print()
    {
        cout<<"Base\n";
    }
};

class Derived : public Base
{
    public :
    void print()
    {
        cout<<"Derived\n";
    }
};

int main()
{
    Base b;
    Derived d;
    b.print();
    d.print();

    Base *ptr = &d;
    ptr -> print();
    
    return 0;
}