// Program to show call by reference.

// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void reverse_dig(int &a, int &b)
{
    int x = 0, y = 0, r1, r2;
    // Add your code here.
    while (a != 0)
    {
        r1 = a % 10;
        x = (x * 10) + r1;
        a = a / 10;
    }
    a = x;
    while (b != 0)
    {
        r2 = b % 10;
        y = (y * 10) + r2;
        b = b / 10;
    }
    b = y;
}
void swap(int &a, int &b)
{
    // Add your code here.
    int temp = a;
    a = b;
    b = temp;
}

// { Driver Code Starts.

int main()
{
    int a, b;
    cin >> a >> b;

    reverse_dig(a, b);
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
} // } Driver Code Ends