class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// Optimal

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int moreNeeed = target - num;

            if (mpp.find(moreNeeed) != mpp.end())
            {
                return {mpp[moreNeeed], i};
            }

            mpp[num] = i;
        }
        return {-1, -1};
    }
};