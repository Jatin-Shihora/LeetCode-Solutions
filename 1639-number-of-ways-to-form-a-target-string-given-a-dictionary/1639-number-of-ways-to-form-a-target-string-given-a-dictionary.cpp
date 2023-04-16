class Solution {
public:
    int numWays(vector<string>& words, string target) {
        int n = target.length(), mod = 1e9 + 7;
        vector<long> res(n + 1);
        res[0] = 1;
        for (int i = 0; i < words[0].length(); ++i) {
            vector<int> count(26);
            for (auto& w : words)
                count[w[i] - 'a']++;
            for (int j = n - 1; j >= 0; --j) {
                res[j + 1] += res[j] * count[target[j] - 'a'] % mod;
            }
        }
        return res[n] % mod;
    }
};