// Program to find first digit of a number.

#include <iostream>

using namespace std;

void firstDigit(int x)
{
    if (x < 10)
    {
        cout<<x;
    }
    else
    {
        x /= 10;
        firstDigit(x);
    }
    // return x;
}

int main()
{
    int num;

    cout << "Enter the number you want to find first digit of : ";
    cin >> num;

    firstDigit(num);

    return 0;
}