class Solution {
public:
    int maxDotProduct(vector<int>& A, vector<int>& B) {
        int n = A.size(), m = B.size();
        vector<vector<int>> dp(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dp[i][j] = A[i] * B[j];
                if (i && j) dp[i][j] += max(dp[i - 1][j - 1], 0);
                if (i) dp[i][j] = max(dp[i][j], dp[i - 1][j]);
                if (j) dp[i][j] = max(dp[i][j], dp[i][j - 1]);
            }
        }
        return dp[n - 1][m - 1];
    }
};