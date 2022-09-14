//Destructor calling for multiple objects in same scope

#include<iostream>

using namespace std;

class Test
{
    int x;
    public :
    Test(int a) : x(a)
    {
        cout<<"Constructor called!"<<" "<<x<<endl;
    }
    ~Test()
    {
        cout<<"Desstructor called!"<<" "<<x<<endl;
    }
};

int main()
{   
    Test t1(10);    //it will be destructed last as it was created first.
    Test t2(20);    //it will be destructed first as it was created last.
    
    return 0;
}