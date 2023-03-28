class Solution {
public:
int mincostTickets(vector<int>& DAYS, vector<int>& cost) {
        
        unordered_set<int> days(DAYS.begin(),DAYS.end());
        vector<int> dp(367);
        
        for(int i=1 ; i<366 ; i++)
        {
            dp[i] = dp[i-1];
            if(days.find(i) != days.end())
            {
			// cost of ith day , decision of ith day will be
                dp[i] = min({ dp[i - 1] + cost[0],   // 1st case
                             dp[max(0, i - 7)] + cost[1],  // 2nd case
                             dp[max(0, i - 30)] + cost[2]});  // 3rd case
            }
        }
        return dp[365];
    }
};