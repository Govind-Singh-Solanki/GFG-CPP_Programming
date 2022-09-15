// real time example of exception handling in cpp

#include <iostream>

using namespace std;

int average(int arr[], int n) throw(string) //specifies what all exceptions this function might throw, recommended practice
{
    if (n == 0)
    {
        throw string("Array size is 0.");
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return (sum/n);
}

int main()
{
    int arr[] = {2, 4, 6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = 0;

    try{
        int res = average(arr, n);
        cout<<res<<endl;
    }
    catch(string &e)
    {
        cout<<e<<endl;
    }
    cout<<"Bye!";

    return 0;
}