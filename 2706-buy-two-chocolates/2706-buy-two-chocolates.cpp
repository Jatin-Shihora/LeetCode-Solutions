class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // Assume minimum and second minimum
        int minimum = min(prices[0], prices[1]);
        int secondMinimum = max(prices[0], prices[1]);

        // Iterate over the remaining elements
        for (int i = 2; i < prices.size(); i++) {
            if (prices[i] < minimum) {
                secondMinimum = minimum;
                minimum = prices[i];
            } else if (prices[i] < secondMinimum) {
                secondMinimum = prices[i];
            }
        }

        // Minimum Cost
        int minCost = minimum + secondMinimum;

        // We can buy chocolates only if we have enough money
        if (minCost <= money) {
            // Return the Amount of Money Left
            return money - minCost;
        }

        // We cannot buy chocolates. Return the initial amount of money
        return money;
    }
};