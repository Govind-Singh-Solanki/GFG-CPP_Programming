//Diamond problem in Cpp

#include<iostream>

using namespace std;

class A
{
    public :
    int x;
    A()
    {
        cout<<"A's constructor called!"<<endl;
    }
};
class B : virtual public A
{
    public :
    // int x;
    B()
    {
        cout<<"B's constructor called!"<<endl;
    }
};
class C : virtual public A
{
    public :
    // int x;
    C()
    {
        cout<<"C's constructor called!"<<endl;
    }
};
class D : public B, public C
{
    public :
    // int x;
    D()
    {
        cout<<"D's constructor called!"<<endl;
    }
    // void display()
    // {
    //     cout<<"D's constructor called!";
    // }
};

int main()
{
    D d;

    //this below code works when we use "virtual" keyword.
    cout<<d.x;  //shows ambiguous as it takes 2 values of x one from inheriting class B and one from C

    //this below code still doesnt solve the Diamond problem so we use virtual keyword, it just calls constructor of A twice.
    // d.display();    //A's constructor is called twice bcoz A is inherited through 2 paths.
    
    return 0;
}