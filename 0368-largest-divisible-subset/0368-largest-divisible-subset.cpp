class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> dp(nums.size(),1);
        int maxLen = 1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i] % nums[j] == 0)
                    dp[i] = max(dp[i],dp[j]+1);
            }
            maxLen = max(maxLen,dp[i]);
        }
        vector<int> ans;
        int prev = -1;
        for(int i=nums.size()-1;i>=0;i--){
            if(maxLen == dp[i] && (prev==-1 || prev%nums[i]==0)){
                ans.emplace_back(nums[i]);
                maxLen--;
                prev = nums[i];
            }
        }
        return ans;
    }
};