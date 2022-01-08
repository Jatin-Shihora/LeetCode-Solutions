class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        //m=number of rows and n = number of columns
        int m = (int)grid.size(), n = (grid[0].size());
        //initializing m and n
        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n, vector<int>(n, 0)));
        //dp dimensions
        dp[0][0][n - 1] = 0 == n - 1 ? grid[0][0] : grid[0][0] + grid[0][n - 1];
        //row traversing
        for (int row = 1; row < m; row++) {
            //avoiding unnecessary column computations
            for (int c1 = 0; c1 < min(n, row + 1); c1++) {
                for (int c2 = max(0, n - 1 - row); c2 < n; c2++) {
                    int prevMax = 0;
                    //Moves of robos in columns
                    for (int offset1 = max(0, c1 - 1); offset1 <= min(n - 1, c1 + 1); offset1++) {
                        for (int offset2 = max(0, c2 - 1); offset2 <= min(n - 1, c2 + 1); offset2++) {
                                prevMax = max(prevMax, dp[row - 1][offset1][offset2]); //9 states wediscussed can be summariazed 
                        }
                    }
                    //Robo collision condition
                    if (c1 == c2) dp[row][c1][c2] = prevMax + grid[row][c1];
                    else dp[row][c1][c2] = prevMax + grid[row][c1] + grid[row][c2];
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