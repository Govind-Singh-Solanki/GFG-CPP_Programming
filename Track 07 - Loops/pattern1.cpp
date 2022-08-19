//Pattern 1 printing.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of stars you want to print : ";
    cin>>n;

    cout<<"\tStars in horizontal row"<<"\n\n";
    for(int i = 0; i < n; i++)
    {
        cout<<"* ";
    }

    cout<<"\n"<<"\n";

    cout<<"\tStars in vertical column"<<"\n\n";
    for(int i = 0; i < n; i++)
    {
        cout<<"*"<<endl;
    }
    return 0;
}