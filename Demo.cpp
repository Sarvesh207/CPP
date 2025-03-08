#include <bits/stdc++.h>

using namespace std;

void count_freq(int arr[], int n)
{
    //  Bruteforce
    // vector<bool> visited(n, false);

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 1;

    //     if (visited[i])
    //     {
    //         continue;
    //     }

    //     visited[i] = true;

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             visited[j] = true;
    //             count++;
    //         }
    //     }

    //     cout << arr[i] << " " << count << endl;
    // }

    //  Optimal Way

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    //  iterator

    for (auto &pair : map)
    {
        cout << pair.first << " " << pair.second << endl;
    }
}

int main()
{
    // int n;

    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // count_freq(arr, n);
    cout << "Hello World" << endl;
    return 0;
}