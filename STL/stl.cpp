#include <bits/stdc++.h>

using namespace std;

//  function
// void print(){
//     cin << "Sarvesh";
// }

// int sum(int a, int b){
//     return a+b;
// }

//  containers

void explainPair()
{
    pair<int, int> p = {1, 3};
    // cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};

    // cout << p2.first << " " << p2.second.first << p2.second.second;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};

    cout << arr[1];
}

void explainVactor(){
    vector<int> v;

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Displaying elements
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Accessing and modifying elements
    v[1] = 50;
    cout << "Second element: " << v.at(1) << endl;

    // Size and capacity
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // Removing elements
    v.pop_back();
    cout << "After pop_back: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;


}


void explainList(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front(); // {2,4}
}

int main()
{   
    return 0;
}