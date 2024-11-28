#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
    }

    if (count == 2)
    {
        cout << "its prime number " << "count: " << count;
    }
    else
    {
        cout << "its not prime number " << "count: " << count;
    }
    return 0;
}