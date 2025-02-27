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

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        if (nums.empty())
        {
            return 0; // or whatever the problem specifies
        }
        int n = nums.size();
        int maxi = nums[0];

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                for (int k = i; k <= j; k++)
                {
                    sum += nums[k];
                }

                if (sum > maxi)
                {
                    maxi = max(maxi, sum);
                }
            }
        }

        return maxi;
    }
};