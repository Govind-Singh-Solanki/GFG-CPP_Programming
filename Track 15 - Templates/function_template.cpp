// Another program for templates in C++.

#include <iostream>

using namespace std;

template <typename T>
T arrMax(T arr[], int x)
{
    T res = arr[0];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > res)
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 40, 69};
    // cout<<arrMax(arr, 3)<<endl;
    cout<<arrMax<int>(arr, 3)<<endl;        //recommended practice to use <data type> along with template name.

    float arr2[] = {10.5, 4.02, 6.9};
    // cout<<arrMax(arr2, 3);
    cout<<arrMax<float>(arr2, 3);

    return 0;
}