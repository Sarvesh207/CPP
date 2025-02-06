class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        for (int i = 1; i <= N; i++) { 
        bool flag = false; 
        
        for (int j = 0; j < N; j++) {
            if (nums[j] == i) {
                flag = true;
                break;
            }
        }

        if (!flag) { 
            return i;
        }
    }

    return N + 1;
    }
};