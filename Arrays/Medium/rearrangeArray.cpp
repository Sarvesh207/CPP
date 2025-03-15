#include <bits/stdc++.h>

using namespace std;

//  BruteForce

// vector<int> RearrangeArrayBySign(vector<int> A, int n)
// {
//     vector<int> pos, neg;
//     vector<int> ans{0, n};

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] < 0)
//         {
//             neg.push_back(A[i]);
//         }
//         else
//         {
//             pos.push_back(A[i]);
//         }
//     }
//     for (int i = 0; i < n / 2; i++)
//     {
//         A[2 * i] = pos[i];
//         A[2 * i + 1] = neg[i];
//     }

//     return A;
// }

//  Optimal
// vector<int> RearrangeArrayBySign(vector<int> A, int n)
// {
//     int pos = 0, neg = 1;
//     vector<int> ans{0, n};

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] < 0)
//         {
//             ans[neg] = A[i];
//             neg = neg + 2;
//         }
//         else
//         {
//             ans[pos] = A[i];
//             pos = pos + 2;
//         }
//     }

//     return A;
// }

//  Varity 2

vector<int> RearrangeArrayBySign(vector<int> A, int n)
{
    vector<int> pos, neg;
    vector<int> ans{0, n};

    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            neg.push_back(A[i]);
        }
        else
        {
            pos.push_back(A[i]);
        }
    }

    if (pos.size() < neg.size())
    {

        for (int i = 0; i < pos.size(); i++)
        {
            A[2 * i] = pos[i];
            A[2 * i + 1] = neg[i];
        }

        int index = pos.size() * 2;

        for (int i = pos.size(); i < neg.size(); i++)
        {
            A[index] = neg[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < neg.size(); i++)
        {
            A[2 * i] = pos[i];
            A[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;

        for (int i = neg.size(); i < neg.size(); i++)
        {
            A[index] = pos[i];
            index++;
        }
    }
    return A;
}

int main()
{
    int n = 4;
    vector<int> A{1, 2, -4, -5, 3, 4};

    vector<int> ans = RearrangeArrayBySign(A, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}