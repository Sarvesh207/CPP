#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int temp[n];

    for (int i = 1; i < n; i++)
    {
        temp[i - 1] = arr[i];
    }

    temp[n - 1] = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

void solveOptimal(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    solve(arr, n);
    solveOptimal(arr, n);
    return 0;
}