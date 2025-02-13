#include <bits/stdc++.h>

using namespace std;

// BruteForce approch

int sortArr(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    return arr[arr.size() - 1];
}

//  Optimal Approch

int sortArray(vector<int> arr)
{
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    vector<int> arr1 = {2, 5, 2, 3, 0};
    vector<int> arr2 = {2, 6, 2, 8, 0};
    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArray(arr2) << endl;

    return 0;
}