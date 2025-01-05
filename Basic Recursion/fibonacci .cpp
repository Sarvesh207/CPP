#include <bits/stdc++.h>

using namespace std;

// int f(int n)
// {
//     if (n <= 1)
//         return n;

//     int last = f(n - 1);
//     int slast = f(n - 2);

//     return last + slast;
// }

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start <= end)
    {
        std::cout << "start: " << start << ", end: " << end
                  << ", s[start]: " << s[start] << ", s[end]: " << s[end] << '\n';

        if (!isalnum(s[start]))
        {
            std::cout << "Skipping non-alphanumeric at start: " << s[start] << '\n';
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            std::cout << "Skipping non-alphanumeric at end: " << s[end] << '\n';
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            std::cout << "Mismatch found: " << s[start] << " != " << s[end] << '\n';
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char c1 = 'A';
    char c2 = '1';
    char c3 = ' ';
    char c4 = '!';
    char c5 = 'z';

    std::cout << isalnum(c1) << " (Expected: true)\n"; // A is a letter
    std::cout << isalnum(c2) << " (Expected: true)\n"; // 1 is a digit
    std::cout << isalnum(c3) << " (Expected: false)\n"; // Space is not alphanumeric
    std::cout << isalnum(c4) << " (Expected: false)\n"; // ! is not alphanumeric
    std::cout << isalnum(c5) << " (Expected: true)\n"; // z is a letter

    return 0;
}