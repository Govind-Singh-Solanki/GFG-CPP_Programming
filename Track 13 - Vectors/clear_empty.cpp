//clear and empty function in vector

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{10, 20, 30, 40};

    cout<<"Size before : "<<v.size()<<endl;

    v.clear();

    cout<<"Size after : "<<v.size()<<endl;

    if(v.empty() == true)
    {
        cout<<"Vector is Empty!";
    }
    else
    {
        cout<<"Vector is not Empty!";
    }
    
    return 0;
}