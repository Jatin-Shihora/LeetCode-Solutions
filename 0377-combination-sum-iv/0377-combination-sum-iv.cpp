class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1);  // at start, none of the values are computed
        return helper(nums, target, dp);
    }
    int helper(vector<int>& nums, int target, vector<int>& dp){
        if(target == 0) return 1;  // base condition
        if(dp[target] != -1) return dp[target];  // if already computed for this value
        // recursive code starts -
        dp[target] = 0;
        // check for every element of nums. An element can only be taken if it is less than target.
        // If an element is chosen, recurse for remaining value.
        for(auto& num : nums) 
            if(num <= target) dp[target] += helper(nums, target - num, dp);
        return dp[target];
    }
};