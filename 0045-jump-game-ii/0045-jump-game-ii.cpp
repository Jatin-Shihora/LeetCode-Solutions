class Solution {
public:
    int solve(vector<int> &nums, vector<int> &dp, int pos){
        if(pos>=nums.size()-1) return 0;
        if(dp[pos]!=10001) return dp[pos];
        for(int j=1;j<=nums[pos];j++)
            dp[pos] =  min(dp[pos],1+solve(nums,dp,pos+j));
        return dp[pos];
    }
    int jump(vector<int>& nums,int pos = 0) {
        vector<int> dp(nums.size(), 10001);
        return solve(nums,dp,0);
    }
};