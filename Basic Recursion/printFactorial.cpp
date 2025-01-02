#include <bits/stdc++.h>

using namespace std;

int printFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * printFactorial(n - 1);
}

int main()
{
    int x;
    cin >> x;
    cout << printFactorial(x) << endl;
    return 0;
}