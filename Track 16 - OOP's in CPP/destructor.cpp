//program showing working of destructor

#include<iostream>

using namespace std;

class Test
{
    public :
    Test()
    {
        cout<<"Constructor is called!"<<endl;
    }
    ~Test()
    {
        cout<<"Destructor is called!"<<endl;
    }
};

int main()
{
    Test t;
    
    return 0;
}