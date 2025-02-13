#include <bits/stdc++.h>

using namespace std;

int getLongestSubarray(int arr[], int k)
{
    int n = arr.size();

    int len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; i < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
            }

            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }

    return len;
}

int main()
{
    int arr[] = {2, 3, 5};
    int k = 5;

    int len = getLongestSubarray(arr, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}