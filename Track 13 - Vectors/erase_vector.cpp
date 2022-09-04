//Erase function of vector

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{5, 10, 15, 20};

    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //the 2nd location end() is excluded and the first location is included 
    v.erase(v.end()-2, v.end());
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.erase(v.begin());     //erase the element present at first location

    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //so when we do end()-1 here in below case it excluded that specific location.
    v.erase(v.begin(), v.end());      //erase elements till last as v.end points to the element after last element in vector

    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}