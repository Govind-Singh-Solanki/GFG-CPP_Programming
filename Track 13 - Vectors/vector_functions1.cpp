//pop_back, front and back function of vectors

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{5, 10, 15, 20};

    v.pop_back();       //removes last element of vector

    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.front() = 50;
    v.back() = 100;

    for(auto y : v)
    {
        cout<<y<<" ";
    }

    return 0;
}