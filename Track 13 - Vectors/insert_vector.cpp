//Insert function in vector.

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{10, 5, 20, 15};

    auto it = v.insert(v.begin(), 100);
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.insert(v.begin() + 2, 200);   //insert at index begin + 2
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.insert(v.begin(), 2, 300);    //insert the value 300 'twice' at begin
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int> v2;

    v2.insert(v2.begin(), v.begin(), v.begin()+2);      //v.begin() + 2 will insert till v.begin() + 1 only
    
    for(auto x : v2)
    {
        cout<<x<<" ";
    }

    return 0;
}