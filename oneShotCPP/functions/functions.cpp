#include <bits/stdc++.h>

using namespace std;

//  types of functions in cpp
//  void  - which does not return anything
//  return -
//  parameterrized
//  non paramater

// void printName(string name)
// {
//     cout << "Hey " << name;
// }

//   this pass by value
// void doSomething(int num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

//   this pass by value
void doSomething(int &num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main()
{
    // string name;
    // cin >> name;
    // printName(name);
    // return 0;

    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}