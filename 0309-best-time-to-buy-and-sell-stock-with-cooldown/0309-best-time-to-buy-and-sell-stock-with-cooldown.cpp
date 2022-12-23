class Solution {
public:
    int maxProfit(vector<int>& prices) {
/*
cool_down : denotes the max profit of current Day_i, with either do nothing, or just sell out on previous day and enter cooling on Day_i
sell : denotes the max profit of current Day_i, with selling stock with price quote of Day_i
hold : denotes the max profit of current Day_i, with keep holding or buy and hold on Day_i
*/
        int coolDown = 0, sell = 0, hold = INT_MIN;
        for( int stockPrice_Day_i : prices){
            int prevCoolDown = coolDown, prevSell = sell, prevHold = hold;   
            // Max profit of cooldown on Day i comes from either cool down of Day_i-1, or sell out of Day_i-1 and today Day_i is cooling day
            coolDown = max(prevCoolDown, prevSell);
            // Max profit of sell on Day_i comes from hold of Day_i-1 and sell on Day_i
            sell = prevHold + stockPrice_Day_i;
            // Max profit of hold on Day_i comes from either hold of Day_i-1, or cool down on Day_i-1 and buy on Day_i
            hold = max(prevHold, prevCoolDown - stockPrice_Day_i);
        }
        // The state of max profit must be either sell or cool down
        return max( sell, coolDown );
    }
};