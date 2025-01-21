#include <bits/stdc++.h>

using namespace std;

//  Brute Force

/**
 *  Sort the array array and return second last element from the array
 */

//  Better Approch

int sLargest(vector<int> arr)
{
    int largest = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    int sLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (sLargest < arr[i] && arr[i] != largest)
        {
            sLargest = arr[i];
        }
    }

    return sLargest;
}


// Optimal approch
int OptimalSecondLargestElement(vector<int> arr)
{

    int largest = arr[0];
    int sLargest = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (largest < arr[i])
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (sLargest < arr[i] && arr[i] != largest)
        {
            sLargest = arr[i];
        }
    }

    return sLargest;
}
int main()

{
    vector<int> arr2 = {2, 6, 2, 8, 0};

    cout << "The Second Largest element in the array is: " << sLargest(arr2) << endl;
    cout << "The Second Largest element in the array is: " << OptimalSecondLargestElement(arr2) << endl;

    return 0;
}