class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = INT_MAX,profit = 0 , len = prices.size();
        for(int i =0 ;i<len ; i++){
            min_val =  min(min_val,prices[i]);
            profit = max(profit,prices[i]-min_val);
        }
        return profit;
    }
};