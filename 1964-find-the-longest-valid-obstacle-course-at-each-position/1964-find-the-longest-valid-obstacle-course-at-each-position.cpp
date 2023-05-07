class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& nums) {
        vector<int> lis;
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            if (lis.empty() || lis[lis.size() - 1] <= x) { // Append to LIS if new element is >= last element in LIS
                lis.push_back(x);
                nums[i] = lis.size();
            } else {
                int idx = upper_bound(lis.begin(), lis.end(), x) - lis.begin(); // Find the index of the smallest number > x
                lis[idx] = x; // Replace that number with x
                nums[i] = idx + 1;
            }
        }
        return nums;
    }
};