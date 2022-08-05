//Program to find the last digit of a number.

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int res = (abs(num) % 10);      //abs makes the negative number positive so we get the last digit correctly
    cout << "Last digit of " << num << " is " << res;
    return 0;
}