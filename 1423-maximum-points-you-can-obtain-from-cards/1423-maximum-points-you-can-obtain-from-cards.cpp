class Solution {
public:
    int maxScore(vector<int>& C, int K) {
        int total = 0;
        for (int i = 0; i < K; i++) total += C[i];
        int best = total;
        for (int i = K - 1, j = C.size() - 1; ~i; i--, j--)
            total += C[j] - C[i], best = max(best, total);
        return best;
    }
};