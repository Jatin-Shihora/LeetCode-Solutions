class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m = (int)grid.size(), n = (grid[0].size());
        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n, vector<int>(n, 0)));
        dp[0][0][n - 1] = 0 == n - 1 ? grid[0][0] : grid[0][0] + grid[0][n - 1];
        for (int row = 1; row < m; row++) {
            for (int c1 = 0; c1 < min(n, row + 1); c1++) {
                for (int c2 = max(0, n - 1 - row); c2 < n; c2++) {
                    int prev_max = 0;
                    for (int offset1 = max(0, c1 - 1); offset1 <= min(n - 1, c1 + 1); offset1++) {
                        for (int offset2 = max(0, c2 - 1); offset2 <= min(n - 1, c2 + 1); offset2++) {
                                prev_max = max(prev_max, dp[row - 1][offset1][offset2]);
                        }
                    }
                    if (c1 == c2)
                        dp[row][c1][c2] = prev_max + grid[row][c1];
                    else
                        dp[row][c1][c2] = prev_max + grid[row][c1] + grid[row][c2];
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res = max(res, dp[m - 1][i][j]);    
            }
        }
        return res;
    }
};