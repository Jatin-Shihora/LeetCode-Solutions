class Solution {
public:
    long long dp[100001];    
    long long solve(int i,vector<vector<int>>& v)
    {
        if(i>=v.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int points = v[i][0];
        int skip = i + v[i][1] + 1;
        return dp[i]= max(points+solve(skip,v),solve(i+1,v));
    }      
    long long mostPoints(vector<vector<int>>& q) {
        memset(dp,-1,sizeof(dp));        
        return solve(0,q);       
    }
};