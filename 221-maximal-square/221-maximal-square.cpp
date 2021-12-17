class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        //base case
        if(matrix.size()==0) return 0;
        //initializing our sentinal variables
        int maxSqr = 0, rows = matrix.size() , column = matrix[0].size();
        //dp matrix that we will be making 
        vector<vector<int>> dp(rows+1,vector<int>(column+1,0));
        
        //Iterate over the matrix
        for(int i=1;i<=rows;++i){
            for(int j=1;j<=column;++j){
                //we found the 1 in our binary matrix 
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]})+ 1;
                    maxSqr=max(maxSqr,dp[i][j]);
                }
            }
        }
        return maxSqr*maxSqr;
    }
};