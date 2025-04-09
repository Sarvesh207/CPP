// Optimal
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();

    for(int i=n-1; i>=0; i--){
        if(a[i] > maxi){
            ans.push_back(a[i]);
        }

        maxi = max(maxi, a[i]);
    }

    sort(ans.begin(), ans.end());
    return ans;
}


//  Brute Force


for(int i=0; i<a.size(); i++){
    bool leader = true;

for(int j=i+1; j<a.size(); j++){
    if(a[j] >= a[i]){
       leader = false;
       break;
    }
}

if(leader){
    ans.push_back(a[i]);
}
}

sort(ans.begin(), ans.end());
return ans;
