class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& A) {
        long res = 0, mod = pow(10, 9) + 7;
        sort(A.begin(), A.end());
        unordered_map<int, long> dp;
        for (int i = 0; i < A.size(); ++i) {
            dp[A[i]] = 1;
            for (int j = 0; j < i; ++j)
                if (A[i] % A[j] == 0)
                    dp[A[i]] = (dp[A[i]] + dp[A[j]] * dp[A[i] / A[j]]) % mod;
            res = (res + dp[A[i]]) % mod;
        }
        return res;
    }
};