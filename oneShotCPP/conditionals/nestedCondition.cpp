#include <iostream>

using namespace std;

int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout<< "not eligable for job";
    } else if(age <= 54){
        cout << "eligable for job";
    } else if(age <= 57){
        cout << "eligable for jo but soon retirement";
    } else {
        cout << "Retirment time";
    }
     return 0;
}