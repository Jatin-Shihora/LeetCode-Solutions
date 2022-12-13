class Solution {
private:
    int minFallingPathSumHelper(vector<vector<int>>& matrix, int r, int c,vector<vector<int>>& dp){
        if(r == 0 and c < matrix[0].size() and c >= 0) return matrix[r][c]; 
        if(c>=matrix[0].size() or c<0) return INT_MAX;
        if(dp[r][c] != INT_MAX) return dp[r][c];

        /*
        we start from the row 1 in the matrix we need to pick for every position of the matrix the min value between:
        Matrix[r-1][c-1] + matrix[r][c] which means we have reach pos [r][c] from left
        Matrix[r-1][c+1] + matrix[r][c] which means we have reach pos [r][c] from right
        Matrix[r-1][c] + matrix[r][c] which means we have reach pos [r][c] from the middle
        */
        return dp[r][c] = matrix[r][c] + min(min(minFallingPathSumHelper(matrix, r-1, c+1, dp), minFallingPathSumHelper(matrix, r-1, c, dp)), minFallingPathSumHelper(matrix, r-1, c-1, dp));
        
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        //dp matrix 
        vector<vector<int>> dp(rows+1,vector<int>(cols+1,INT_MAX));
        
        int ans = INT_MAX; 
        for(int c=0;c<cols;c++)
            ans = min(ans,minFallingPathSumHelper(matrix,rows-1,c,dp));
        
        return ans;
    }
};