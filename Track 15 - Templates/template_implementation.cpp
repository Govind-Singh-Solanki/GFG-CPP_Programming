// Simple template implementation program in c++

#include <iostream>

using namespace std;

//creating a template
template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    int x, y;
    cout<<"Enter 2 numbers to compare : ";
    cin>>x>>y;

    cout<<myMax(x, y)<<endl;
    cout<<myMax('c', 'g');

    return 0;
}