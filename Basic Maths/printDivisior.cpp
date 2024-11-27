#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int *divisiors = new int[n];
    int count = 0;

    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisiors[count++] = i;
        }
    }



    
}