class Solution {
   public:
    //two pointer sliding window
    int minOperations(vector<int>& nums, int x) {
        int sum = 0, n = nums.size();
        for (int i : nums) sum += i; // finding total sum
        int target = sum - x;//center of problem
        int curr_sum = 0, max_len = 0;
        int start_idx = 0;
        bool found = false;
        for (int end_idx = 0; end_idx < n; end_idx++) {
            curr_sum += nums[end_idx]; //suffix sum
            while (start_idx <= end_idx && curr_sum > target) {
                curr_sum -= nums[start_idx]; //for prefix sum
                start_idx += 1;
            }
            if (curr_sum == target) {
                found = true;
                max_len = max(max_len, end_idx - start_idx + 1);
            }
        }
        return found ? n - max_len : -1;
    }
};