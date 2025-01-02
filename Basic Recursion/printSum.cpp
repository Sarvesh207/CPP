#include <bits/stdc++.h>

using namespace std;

void Printsum(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    };
    Printsum(n - 1, sum + n);
}

int main()
{
    int x;
    cin >> x;
    Printsum(x, 0);
}