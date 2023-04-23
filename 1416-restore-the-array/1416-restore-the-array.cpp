class Solution {
public:
    int numberOfArrays(string s, int k) {
        vector<int> dp(s.size(), -1); // dp[i] is number of ways to print valid arrays from string s start at i
        return dfs(s, k, 0, dp);
    }
    int dfs(const string& s, long k, int i, vector<int>& dp) {
        if (i == s.size()) return 1; // base case -> Found a valid way
        if (s[i] == '0') return 0; // all numbers are in range [1, k] and there are no leading zeros -> So numbers starting with 0 mean invalid!
        if (dp[i] != -1) return dp[i];
        int ans = 0;
        long num = 0;
        for (int j = i; j < s.size(); j++) {
            num = num * 10 + s[j] - '0'; // num is the value of the substring s[i..j]
            if (num > k) break; // num must be in range [1, k]
            ans += dfs(s, k, j + 1, dp);
            ans %= 1000000007;
        }
        return dp[i] = ans;
    }
};