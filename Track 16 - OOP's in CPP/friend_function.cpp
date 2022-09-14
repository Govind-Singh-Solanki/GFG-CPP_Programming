//Friend function in C++

#include<iostream>

using namespace std;

class Employee;

class Printer
{
    public :
    void printEmp(const Employee &e);
};

class Employee
{
    private :
    int id;
    string name;
    public :
    friend void Printer :: printEmp(const Employee &e);
    Employee(int a, string x) : id(a), name(x)
    {}
};

void Printer :: printEmp(const Employee &e)
{
    cout<<e.id<<" "<<e.name<<endl;
}

int main()
{
    Printer p;
    Employee e(101, "Govind");
    p.printEmp(e);
    
    return 0;
}