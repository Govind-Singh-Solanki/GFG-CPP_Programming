//program showing vector implementation

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(50);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> v2{5, 10, 15, 20};

    //wont change the value of vector elements.
    // for(int x : v2)
    // {
    //     //before changing
    //     // cout<<x<<" ";
    //     //after changing value
    //     x = 5;
    //     // cout<<x<<" ";
    // }

    //will change the value of vector elements.
    for(int &x : v2)
    {
        //before changing
        // cout<<x<<" ";
        //after changing value
        x = 5;
        // cout<<x<<" ";
    }

    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    

    cout<<endl;


    

    return 0;
}