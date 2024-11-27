#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ld = 0;
    int sum = 0;

    while (n > 0)
    {
        ld = n % 10;

        sum = sum + (ld * ld * ld);

        n = n / 10;
    }

    cout << sum;

    if(n == sum) cout << "Amstrong num";
    else cout << "Not amstrong num";
}