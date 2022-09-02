//Simple program to show implementation of a structure

#include<iostream>
#include<string>

using namespace std;

struct student{
    int roll;
    string name;
    string address;
};

int main()
{
    student s1;
    s1.roll = 101;
    s1.name = "Govind";
    s1.address = "Jaipur";

    cout<<s1.roll<<endl;
    cout<<s1.name<<endl;
    cout<<s1.address<<endl;

    return 0;
}