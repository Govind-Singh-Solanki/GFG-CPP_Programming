// Simple program to show working of constructors

#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Point p1;         // object p1 has no parameters hence constructor 1 will be called
    Point p2(10, 15); // object p2 has parameters so constructor 2 will be called accordingly

    p1.print();
    p2.print();

    Point *ptr = new Point(50, 100);

    ptr->print();

    return 0;
}