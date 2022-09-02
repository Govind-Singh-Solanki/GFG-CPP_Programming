//Program to show how array of structure works.

#include<iostream>

using namespace std;

struct point{
    int x;
    int y;
};  

int main()
{
    point arr[5];
    point *ptr = arr;
    for(int i = 0; i < 5; i++)
    {
        arr[i].x = i + 5;
        arr[i].y = i + 10;
    }

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i].x<<" ";
        cout<<arr[i].y<<endl;
    }

    return 0;
}