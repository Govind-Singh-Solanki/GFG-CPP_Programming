//Program to show how to pass structure to a function

#include<iostream>

using namespace std;

struct point{
    int x;
    int y;
};

//Passing structure by Reference
void display(point &A)      //making reference saves space as here it takes original rather than creating a copy.
{
    // A.x = 20;
    // A.y = 50;
    cout<<A.x<<" ";
    cout<<A.y<<endl;
}

//Passing structure by Pointers.
void display(point *A)      //making reference saves space as here it takes original rather than creating a copy.
{
    // A.x = 20;
    // A.y = 50;
    cout<<A -> x<<" ";
    cout<<A -> y<<endl;
}

int main()
{
    point p[5];

    for (int i = 0; i < 5; i++)
    {
        p[i].x = i;
        p[i].y = i*10;
    }

    for (int i = 0; i < 5; i++)
    {
        display(p[i]);      //displays every array element.
    }
    
    display(&p[3]);

    return 0;
}