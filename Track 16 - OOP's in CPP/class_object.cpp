// Simple C++ program showing the concept of classes and objects

#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imag;

public: // so constructor can be called else it will be inaccessible
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
};

int main()
{
    Complex c1(10, 15);
    c1.print();

    return 0;
}