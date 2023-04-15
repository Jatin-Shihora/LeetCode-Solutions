class Solution {
    //can pick(or skip) a coin from the ith pile in my jth turn and call recursively
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return solve(0,dp,piles,k);
    }
    int solve(int index, vector<vector<int>> &dp, vector<vector<int>> &piles,int k){
        if(index >= piles.size()) return 0;
        int maxi = 0, sum = 0;
        if(dp[index][k] !=-1) return dp[index][k];
        
        //dont take from that pile
        maxi = max(maxi, solve(index+1,dp,piles,k));
        
        for(int i=0;i<piles[index].size();i++){
            sum += piles[index][i];
            
            //take sum certain prefix from that pile, if we can take that much elements
            if(k-(i+1) >= 0) 
                maxi = max(maxi,sum+solve(index+1,dp,piles,k-(i+1)));
        }
        return dp[index][k] = maxi;//return max
    }
};