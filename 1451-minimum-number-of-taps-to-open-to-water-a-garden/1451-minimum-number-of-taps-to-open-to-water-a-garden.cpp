class Solution {
public:
    int minTaps(int n, vector<int>& A) {
        vector<int> dp(n + 1, n + 2);
        dp[0] = 0;
        for (int i = 0; i <= n; ++i)
            for (int j = max(i - A[i] + 1, 0); j <= min(i + A[i], n); ++j)
                dp[j] = min(dp[j], dp[max(0, i - A[i])] + 1);
        return dp[n]  < n + 2 ? dp[n] : -1;
    }
};