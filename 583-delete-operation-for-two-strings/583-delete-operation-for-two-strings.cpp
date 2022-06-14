class Solution {
public:
vector<vector<int> >dp;
int minDistance(string& word1, string& word2) {
	// dp[i][j] will denote minimum steps required to equalize word1[i:end] and word[2:j:end]
	dp.resize(size(word1) + 1, vector<int>(size(word2) + 1, 1000));
	return solve(word1, word2, 0, 0);
}
int solve(string &w1, string &w2, int i, int j) {
	if(i == size(w1) && j == size(w2)) return 0;
	if(i == size(w1) || j == size(w2)) return max(size(w1) - i, size(w2) - j);
	if(dp[i][j] != 1000) return dp[i][j];  // directly return stored answer if already computed before
	if(w1[i] == w2[j]) return solve(w1, w2, i + 1, j + 1);
	return dp[i][j] = 1 + min(solve(w1, w2, i + 1, j), solve(w1, w2, i, j + 1));
}
};