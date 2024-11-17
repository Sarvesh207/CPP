#include <bits/stdc++.h>

using namespace std;

// write a program that taks an input of age
//  and prints if uou are adult or not

int main()
{
    // int age;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You are an adult";
    // }

    // cout << "You are not an adult !";

    int marks;
    cin >> marks;
    if (marks < 25)
    {
        cout << "F";
    }
    if (marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    if (marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    if (marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    if (marks >= 80 && marks <= 100)
    {
        cout << "A";
    }

    return 0;
}
