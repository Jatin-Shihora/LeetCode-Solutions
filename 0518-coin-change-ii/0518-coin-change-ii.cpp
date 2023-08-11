//We either pick or notPick any element if we pick any element we hold that element until that is not use full on that level.
class Solution {
public:
    int f(int ind, int amount, vector<int>& coins, vector<vector<int>>& dp) {
        int n = coins.size();
        if (ind == n || amount <= 0) return amount == 0 ? 1 : 0;
        if (dp[ind][amount] != -1) return dp[ind][amount];

        int pick = f(ind, amount - coins[ind], coins, dp);
        int notPick = f(ind + 1, amount, coins, dp);

        dp[ind][amount] = pick + notPick;
        return dp[ind][amount];
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
        return f(0, amount, coins, dp);
    }
};