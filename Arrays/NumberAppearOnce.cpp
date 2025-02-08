class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int n = nums.size();
    
            //  Optimal
    
            int xorr =  0;
            for(int i=0; i<n; i++){
            
                
                xorr = xorr ^ nums[i];
            }
    
            return xorr;
    
    
    
    
            // Better 2
    
            // map<int, int> map;
            // for(int i=0; i<n; i++){
            //     map[nums[i]]++;
            // }
    
            // for(auto it : map){
            //     if(it.second ==1){
            //         return it.first;
            //     }
            // }
    
            //  Better 1   but not applicable for
    
            // int maxi = nums[0];
    
            // for (int i = 1; i < n; i++) {
            //     maxi = max(maxi, nums[i]);
            // }
    
            // vector<int> hash(maxi + 1, 0);
            // for (int i = 0; i < n; i++) {
            //     hash[nums[i]]++;
            // }
    
            // for (int i = 0; i < n; i++) {
            //     if (hash[nums[i]] == 1) {
            //         return nums[i];
            //     }
            // }
    
            //  Brute Force
    
            // for(int i=0; i<n; i++){
            //     int count = 0;
    
            //     for(int j = 0; j<n; j++){
    
            //         if(nums[j] == nums[i]){
            //             count++;
            //         }
            //     }
    
            //     if(count == 1){
            //         return nums[i];
            //     }
            // }
    
        }
    };