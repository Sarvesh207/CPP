class Solution {
public:
    void reverse(vector<int>& nums, int left, int right) {
        while (left <= right) {

            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 0 || k == 0)
            return; // Edge case handling
        k = k % n;  // Ensure k is within bounds

        //  Optimal Approch

        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);

        // Brute Force Approch

        // vector<int> temp(k); // Use vector instead of VLA
        // for (int i = n - k; i < n; i++) {
        //     temp[i - (n - k)] = nums[i]; // Store last k elements
        // }
        // for (int i = n - k - 1; i >= 0; i--) {
        //     nums[i + k] = nums[i]; // Shift remaining elements
        // }
        // for (int i = 0; i < k; i++) {
        //     nums[i] = temp[i]; // Place back stored elements
        // }
    }
};