//Simple program showing inheritance in C++

#include<iostream>
#include<string>

using namespace std;

//Base Class
class Person
{
    //access specifier is protected i.e it wont be accessible outside the class except for Inheriting class.
    protected :
    string name;
    int id;
    public :
    Person(string x, int y)
    {
        name = x;
        id = y;
    }
    Person(){}
    // {
    //     name = "Govind";
    //     id = 101;
    // }
    void setName(string x)
    {
        this -> name = x;
    }
    void setID(int id)
    {
        this -> id = id;
    }
};

//Derived Class
class Student : public Person   //public specifier will make everything public except for private in Base class.
{
    private :
    int marks;
    public :
    Student(int marks)
    {
        this -> marks = marks;
    }
    Student(){}
    // Student()
    // {
    //     marks = 100;
    // }
    void setMarks(int marks)
    {
        this -> marks = marks;
    }
    void print()
    {
        cout<<id<<" "<<name<<" "<<marks<<endl;
    }
};

int main()
{
    Student s1(91), s2(89);
    s1.setID(143);
    s1.setName("Govind");
    s2.setName("Abhishek");
    s2.setID(132);

    Student s3;
    int marks;
    string x;
    int a;
    cin>>x;
    cin>>a;
    cin>>marks;
    s3.setID(a);
    s3.setName(x);
    s3.setMarks(marks);
    // Student s3;

    s1.print();
    s2.print();
    s3.print();

    return 0;
}