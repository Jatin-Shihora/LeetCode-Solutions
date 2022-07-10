class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1);  // dp[i] is minimum cost to reach to i_th floor
        for (int i = 2; i <= n; i++) {
            int jumpOneStep = dp[i - 1] + cost[i - 1];  // Minimum cost if we jump 1 step from floor (i-1)_th to i_th floor
            int jumpTwoStep = dp[i - 2] + cost[i - 2];  // Minimum cost if we jump 2 steps from floor (i-2)_th to i_th floor
            dp[i] = min(jumpOneStep, jumpTwoStep);
        }
        return dp[n];
    }
};