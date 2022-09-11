// Program for matrix multiplication

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{1, 2}, {3, 4}};
    int res[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] = res[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}