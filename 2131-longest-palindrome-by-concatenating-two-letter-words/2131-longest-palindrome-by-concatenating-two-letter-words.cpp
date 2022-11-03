class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        vector<vector<int>> counter(26, vector<int>(26, 0));
        int ans = 0;
        for (string w: words) {
            int a = w[0] - 'a', b = w[1] - 'a';
            if (counter[b][a]) ans += 4, counter[b][a]--;
            else counter[a][b]++;
        }
        for (int i = 0; i < 26; i++) {
            if (counter[i][i]) {
                ans += 2;
                break;
            }
        }
        return ans;
    }
};