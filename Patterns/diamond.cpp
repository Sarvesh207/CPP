#include<bits/stdc++.h>

using namespace std;
void nStarTriangleUpper(int n) {
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
void nStarTriangleLower(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<i; j++){
            cout << " ";
        }

        //  star
        for(int k=0; k<2*n-(2*i+1); k++){
            cout << "*";
        }

        //  space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void nStarDiamond(int n) {
    // Write your code here.
    nStarTriangleUpper(n);
    nStarTriangleLower(n);
}

int main(){
    int n;
    cin >> n;
    nStarDiamond(n)
    return 0;
}