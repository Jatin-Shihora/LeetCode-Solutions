class Solution {
public:
    //This is DP solution 
    int countPaths(int i, int j ,int row, int column,vector<vector<int>> &dp){
        if(i==(row-1) && j== (column-1)) return 1;
        
        if(i>=row || j >= column) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        else return dp[i][j]=countPaths(i+1,j,row,column,dp)+countPaths(i,j+1,row,column,dp);
    }
    int uniquePaths(int m, int n){
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        
        int num =  countPaths(0,0,m,n,dp); 
        if(m==1 && n==1) return num; 
        return dp[0][0];
    }
}; 