// Program to create a simple calculator!

#include <iostream>

using namespace std;

int main()
{
    int x, y; // variables to perform operation on
    int op;   // variable to store what operation to perform

    cout << "Enter the choice of operation you want to perform from following list : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Remainder" << endl;
    cin >> op;

    cout << "Enter the value of first number : ";
    cin >> x;
    cout << "Enter the value of second number : ";
    cin >> y;

    int res;

    switch (op)
    {
    case 1:
        res = (x + y);
        cout << res;
        break;
    case 2:
        res = (x - y);
        cout << res;
        break;
    case 3:
        res = (x * y);
        cout << res;
        break;
    case 4:
        res = (x / y);
        cout << res;
        break;
    case 5:
        res = (x % y);
        cout << res;
        break;
    default:
        cout << "Invalid Choice!";
    }

    return 0;
}