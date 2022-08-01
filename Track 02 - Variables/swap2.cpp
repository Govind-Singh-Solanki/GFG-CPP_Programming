// Program to swap 2 strings.

// #include <iostream>
// using namespace std;

// int main()
// {
//     string s1 = "Govind";
//     string s2 = "Mudit";

//     string temp;

//     cout<<s1<<" "<<s2<<endl;

//     temp = s1;
//     s1 = s2;
//     s2 = temp;

//     cout<<s1<<" "<<s2;

//     return 0;
// }


//Program to swap 2 strings using char data type.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s1[10] = "Govind";
    char s2[10] = "Mudit";

    char temp[10];

    cout<<s1<<" "<<s2<<endl;

    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);

    cout<<s1<<" "<<s2;

    return 0;
}
