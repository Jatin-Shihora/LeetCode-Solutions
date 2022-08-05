class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<unsigned int> dp(target + 1);
        
        dp[0] = 1;
        
        sort (nums.begin(), nums.end());
        
        for (int i = 1; i <= target; i++) 
        {
            for (auto num : nums) {
                if (i < num) break;
                dp[i] += dp[i - num];
            }
        }
        return dp.back();
    }
};