//Program showing this pointer usage

#include<iostream>

using namespace std;

class Point
{
    int x, y;
    public :
    Point(int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
    Point &setX(int x)
    {
        this -> x = x;
        return *this;       //function returns class type as 'this' is an object of point class only and hence return the same object
    }
    Point &setY(int y)
    {
        this -> y = y;
        return *this;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Point p1(10, 20);
    p1.print();
    p1.setX(5).setY(25);
    p1.print();
    
    return 0;
}