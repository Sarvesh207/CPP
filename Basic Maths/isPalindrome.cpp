#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int revNum = 0;
    int dub = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    if (dub == revNum)
    {
        cout << "Is palindrome";
    } else {
    cout << "not palindrome";
    }
}
