class Solution {
public:
    int MOD = 1e9+7;
    vector<vector<vector<int>>> dp;
    int solve(vector<int>&group, vector<int>&profit, int minProfit, int maxPeople, int index){
        if (maxPeople < 0) return 0; //means that we took more people than we were allowed
        
        if(index == group.size()){
          if (minProfit > 0) return 0; //means that still there is some 'minProfit' left to make
                                       //but now the list of crimes is over :(..so no way to make profit
          else return 1; //either we got profit = minProfit or profit > minProfit
        }
        
        if(minProfit<0) minProfit = 0;
        if (dp[minProfit][maxPeople][index] != -1) return dp[minProfit][maxPeople][index];
        
        int pickWays = solve(group,profit,minProfit-profit[index],maxPeople - group[index], index + 1);
        int notPickWays = solve(group,profit,minProfit,maxPeople,index+1);
        
        return dp[minProfit][maxPeople][index] = (pickWays + (long long)notPickWays) % MOD;
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int sz = group.size();
        dp = vector<vector<vector<int>>> (minProfit+1,vector<vector<int>>(n+1,vector<int>(sz,-1)));
        int ans = solve(group,profit,minProfit,n,0);
        return ans;
    }
};