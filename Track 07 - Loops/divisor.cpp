// Program to find smallest divisor greater than 1

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number you want to find smallest divisor of : ";
    cin>>n;

    for (int i = 2; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            cout << i;
            break;
        }
        
    }

    return 0;
}