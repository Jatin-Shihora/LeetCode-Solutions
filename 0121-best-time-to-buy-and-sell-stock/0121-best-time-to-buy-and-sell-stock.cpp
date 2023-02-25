class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimal = INT_MAX , maxprofit= 0;
        for(int i=0;i<prices.size();i++){
            minimal =min(minimal, prices[i]);
            maxprofit = max(maxprofit, prices[i]-minimal);
        }
        return maxprofit;
    }
};