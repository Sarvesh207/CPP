#include <bits/stdc++.h>

using namespace std;

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
    for (int i = 0; i < n / 2; i++)
    {
        A[2 * i] = pos[i];
        A[2 * i + 1] = neg[i];
    }

    return A;
}

int main()
{
    int n = 4;
    vector<int> A{3, -2, 1, -5, 2, -4};

    vector<int> ans = RearrangeArrayBySign(A, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}