//  Optimal
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {

            sum += nums[i];

            if (sum > maxi)
            {
                maxi = sum;
            }

            if (sum < 0)
                sum = 0;
        }

        return maxi;
    }
};

// Better  gives Time Limite Excced
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n = nums.size();
            int maxi = nums[0];
    
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = i; j < n; j++) {
                    sum += nums[j];
    
                    maxi = max(maxi, sum);
                }
            }
    
            return maxi;
        }
    };
// BruteFore  give Time Limite Exceeds
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        
        int n = nums.size();
        int maxi = nums[0]; // Initialize with first element instead of INT_MIN

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = 0;
                // Calculate sum for subarray from i to j
                for (int k = i; k <= j; k++)
                {
                    sum += nums[k];
                }
                maxi = max(maxi, sum);
            }
        }

        return maxi;
    }
};