#include <bits/stdc++.h>

using namespace std;

vector<int> sortZerosOnesTwos(vector<int> &arr)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    int i = 0;
    while (count0--)
        arr[i++] = 0;
    while (count1--)
        arr[i++] = 1;
    while (count2--)
        arr[i++] = 2;

    return arr;
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    vector<int> sortedArray = sortZerosOnesTwos(arr);
    for (int i = 0; i < sortedArray.size(); i++)
    {
        cout << sortedArray[i] << " ";
    }
    cout << endl;
    return 0;
}