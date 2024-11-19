#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<< "* ";
        }
        cout<< endl;
    }
}
void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j<< " ";
        }
        cout << endl;
    }
}

//  star taingle 
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        //  star
        for(int k=0; k<2*i+1; k++){
            cout << "*";
        }

        //  space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    pattern6(4);
}