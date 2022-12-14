class Solution {
    /*
    Approach : Basic idea is to break the problem into subproblems by solving it for 1 house,2 houses and then so on. So we can observe logically that value with n houses is max(value with n-1 houses,value with n-2 houses+value of nth house).Therefore we create dp array and fill it with similar logic to find the value with n houses.
    TC amd SC :O(n)
    */
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int n = nums.size();
        vector<int> dp(n+1,0);
        dp[1] = nums[0];
        for(int i=2;i<=n;i++)
            dp[i]=max(dp[i-1],dp[i-2]+nums[i-1]);
        
        return dp[n];
    }
};   