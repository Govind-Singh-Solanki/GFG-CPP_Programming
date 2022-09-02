//Program to show pointers in structure.

#include<iostream>

using namespace std;

struct student{
    int roll;
    string name;
    string add;
};

int main()
{
    student s1 = {1, "Goru", "Beawar"};
    student *ptr = &s1;

    cout<<ptr->roll<<endl;
    cout<<ptr->name<<endl;
    cout<<ptr->add<<endl;

    ptr -> roll = 101;
    ptr -> name = "Govind";
    ptr -> add = "Jaipur";

    cout<<ptr->roll<<endl;
    cout<<ptr->name<<endl;
    cout<<ptr->add<<endl;

    return 0;
}