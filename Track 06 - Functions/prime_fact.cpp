// Program for Prime Factorization.

#include <iostream>

using namespace std;

int isPrime(int a)
{

    for (int i = 2; i < a; i++)
    {
        if ((a % i) == 0)
        {
            return false;
        }
    }
    return true;
}

void primeFactorization(int x)
{
    for (int i = 2; i <= x; i++)
    {
        if (isPrime(i))
        {
            int y = i;

            while ((x % y) == 0)
            {
                cout << i << " ";
                y = y * i;
            }
        }
    }
}

int main()
{
    int num;

    cout << "Enter the number you want to Prime Factorize : ";
    cin >> num;

    primeFactorization(num);

    return 0;
}