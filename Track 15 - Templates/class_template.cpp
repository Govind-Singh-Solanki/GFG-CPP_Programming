//Program to implement class templates in CPP

#include<iostream>

using namespace std;

template <typename T>
struct Pair{
    T x, y;         //members of T type
    Pair(T i, T j){         //Constructor calling of struct Pair with parameters as 'i' and 'j'
        x = i;
        y = j;
    }
    T getFirst();//{
    //     return x;
    // }
    T getSecond();//{
    //     return y;
    // }
};

template <typename T>
T Pair<T>::getFirst()
{
    return x;
}

template <typename T>
T Pair<T>::getSecond()
{
    return y;
}

int main()
{
    Pair<int> p1(10, 20);       //whole of 'Pair<int>' is the data type.

    cout<<p1.getFirst()<<endl;
    cout<<p1.getSecond()<<endl;

    Pair<char> p2('g', 'm');       //whole of 'Pair<char>' is the data type.

    cout<<p2.getFirst()<<endl;
    cout<<p2.getSecond()<<endl;
    
    return 0;
}