// Program to display number of distinct elements in an array.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements to be inserted in array : ";
    cin >> n;

    int arr[n];

    if (n == 0)
    {
        cout << "Array doesnt contain any elements!\n";
    }
    else
    {
        cout << "Enter elements of array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    int count = 0;
    bool isDistinct = true;

    for (int i = 0; i < n; i++)
    {
        isDistinct = true;
        {
            for (int j = (i - 1); j >= 0; j--)
            {
                if (arr[i] == arr[j])
                {
                    isDistinct = false;
                    break;
                }
            }
        }
        if (isDistinct == true)
        {
            count++;
        }
    }

    cout << "Number of distinct elements in the array are : " << count;

    return 0;
}