//Program to find whether a given year is leap or not!

#include<iostream>

using namespace std;

int main()
{
    int year;
    
    cout<<"Enter the year : ";
    cin>>year;

    if(((year % 4) == 0) && ((year % 100) != 0))
    {
        cout<<"It is a Leap Year!";
    }
    else if(((year % 400) == 0))
    {
        cout<<"It is a Leap Year!";
    }
    else
    {
        cout<<"It is not a Leap Year!";
    }

    return 0;
}