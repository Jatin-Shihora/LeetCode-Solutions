class Solution {
public:
    // dp tabulation code
    int maxUncrossedLines(vector<int> nums1, vector<int> nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        // init. complete dp array
        // also covering our base condition
        // when length of any nums array == 0
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (nums1[i - 1] == nums2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }else{
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
    }
};