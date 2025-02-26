//  Brute Force
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            int cnt = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    cnt++;
                }
            }

            if (cnt > (n / 2))
            {
                return nums[i];
            }
        }

        return -1;
    }
};

//  Better

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second > (n / 2))
            {
                return it.first;
            }
        }

        return -1;
    }
};

//  Optimal
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = 0;
        int el = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt == 0)
            {
                el = nums[i];
            }
            else if (nums[i] == el)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }

        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (el == nums[i])
            {
                cnt1++;
            }
        }

        if (cnt1 > n / 2)
        {
            return el;
        }

        return -1;
    }
};