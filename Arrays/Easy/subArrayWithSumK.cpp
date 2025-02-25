#include <bits/stdc++.h>
using namespace std;

// Brute Fore  1

int getLongestSubarray1(vector<int> &arr, long long target)
{
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i; j < arr.size(); j++)
        {
            long long sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k]; // Accumulate sum directly
            }

            if (sum == target)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    return maxLen;
}

//  Brute Force Brute Force 2
int getLongestSubarray2(vector<int> &arr, long long target)
{
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        long long sum = 0;

        for (int j = i; j < arr.size(); j++)
        {

            sum += arr[j]; // Accumulate sum directly

            if (sum == target)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    return maxLen;
}

int getLongestSubarray3(vector<int> &arr, long long target)
{
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        long long sum = 0;

        for (int j = i; j < arr.size(); j++)
        {

            sum += arr[j]; // Accumulate sum directly

            if (sum == target)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    return maxLen;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray2(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
