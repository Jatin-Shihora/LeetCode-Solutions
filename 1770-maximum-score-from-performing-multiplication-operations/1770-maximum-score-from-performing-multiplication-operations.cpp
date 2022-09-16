class Solution {
public:
    int m, n;
    int dfs(vector<int>& nums, vector<int>& mult, vector<vector<int>>& dp, int i, int j) {
        // i : pointer at nums
        // j : pointer at mult
        // if we have performed all operations, then return 0
        if (j == m) return 0;
        // memoizated before - return the value here
        if (dp[i][j] != INT_MIN) return dp[i][j];
        // we can either choose an integer in `nums` the start or the end of the array
        // so we try both case and take the maximum value
        // then memoize it
        return dp[i][j] = max(
            // pick from the start
            mult[j] * nums[i] + dfs(nums, mult, dp, i + 1, j + 1),
            // pick fromt the end
            mult[j] * nums[n - 1 - j + i] + dfs(nums, mult, dp, i, j + 1)
        ); 
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n = (int) nums.size(), m = (int) multipliers.size();
        vector<vector<int>> dp(m, vector<int>(m, INT_MIN));
        // or u can return dp[0][0] after running dfs
        return dfs(nums, multipliers, dp, 0, 0);
    }
};