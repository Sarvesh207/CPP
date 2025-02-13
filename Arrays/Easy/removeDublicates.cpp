#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    set<int> set;

    for (int i = 0; i < n; i++)
    {
        set.insert(arr[i]);
    }

    int k = set.size();
    int j = 0;

    for (int x : set)
    {
        arr[j++] = x;
    }

    return k;
}

int removeDuplicatesOptimal(int arr[], int n)
{
    int i = 0;
    int count = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
            count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return count;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3};
    int n = 6;
    // cout << "size of unique element is " << removeDuplicates(arr, n);
    cout << "size of unique element is in optimal solution " << removeDuplicatesOptimal(arr, n);
    return 0;
}