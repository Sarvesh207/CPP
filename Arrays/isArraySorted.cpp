
#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                return false;
        }
    }

    return true;
}



bool isSortedOptimal(int arr[], int n)
{
    for (int j = 1; j < n; j++)
    {
        if (arr[j] < arr[j - 1])
            return false;
    }

    return true;
}

int main()
{

    int arr[] = {1, 2, 3, 7, 5}, n = 5;
    bool ans = isSortedOptimal(arr, n);
    if (ans)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
