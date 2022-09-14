//Example of Inheritance

#include<iostream>

using namespace std;

class Base
{
    protected :
    int x;
    public :
    Base(int a) : x(a)
    {
        cout<<"Base\n";
    }
    // Base(){}    //will show random value of x as there is no definition for this constructor.
};

class Derived : public Base
{
    private :
    int y;
    public :
    // Derived(int b) : y(b)   ---> better way to write this code is using initializer list so we dont need default constructor
    Derived(int a, int b) : Base(a), y(b)
    {
        cout<<"Derived\n";
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Derived d(10, 20);  //calls base class too and derived class too.
    d.print();
    
    return 0;
}