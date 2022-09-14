//Operator overloading in CPP

#include<iostream>

using namespace std;

class Complex
{
    private :
    int real, imag;
    public :
    Complex(int r = 0, int i = 0) : real(r), imag(i)
    {}
    Complex operator+ (Complex const &obj)
    {
        Complex res;    //calls default constructor of Complex class. 
        res.real = real + obj.real;     //the normal real becomes real of first object, and obj.real is 2nd object's real part.
        res.imag = imag + obj.imag;     //same here.
        return res;
    }
    void print()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main()
{
    Complex c1(5, 10), c2(15, 20);
    Complex c3 = c1 + c2;       //same as c1.operator+(c2)

    c3.print();
    
    return 0;
}