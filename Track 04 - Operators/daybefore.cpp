//Program to find what was the day n days before current day.

#include<iostream>

using namespace std;

int main()
{
    int d, n;   //d = current day, n = no. of days you want to back to
    
    cout<<"0 : Sunday"<<endl;
    cout<<"1 : Monday"<<endl;
    cout<<"2 : Tuesday"<<endl;
    cout<<"3 : Wednesday"<<endl;
    cout<<"4 : Thursday"<<endl;
    cout<<"5 : Friday"<<endl;
    cout<<"6 : Saturday"<<endl;
    cout<<endl;

    cout<<"Enter the current day : ";
    cin>>d;
    cout<<"Enter the number of days you want to find back for : ";
    cin>>n;

    int x = (n%7);
    int res = (d - x);
    if(res > 0)
    {
    cout<<n<<" days before current day was "<<res;
    }
    else
    {
        res = (res + 7);
        cout<<n<<" days before current day was "<<res;
    }

    return 0;
}