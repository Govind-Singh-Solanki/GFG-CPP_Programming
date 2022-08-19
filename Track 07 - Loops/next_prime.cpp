// Program to find immediate next prime number

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    if (n == 0)
    {
        cout << "2";
    }
    else
    {

        n++;

        for (int i = n; i <= 2 * n; i++)
        {
            bool flag = true;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                cout << i;
                break;
            }
        }
    }

    return 0;
}