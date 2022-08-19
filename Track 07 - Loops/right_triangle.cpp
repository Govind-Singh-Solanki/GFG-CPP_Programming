#include <iostream>

using namespace std;

int main()
{
    int s;
    cout << "Enter the number os rows in triangle : ";
    cin >> s;

    for (int i = 1; i <= s; i++)
    {
        if (i == 1)
        {
            cout << "*" << endl;
        }
        else if (i == s)
        {
            for (int k = 1; k <= s; k++)
            {
                if (k == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " *";
                }
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    cout << "* ";
                }
                else if (j == i)
                {
                    cout << " *";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}