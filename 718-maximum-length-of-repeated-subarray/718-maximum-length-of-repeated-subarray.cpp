class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
      if (A.size() < B.size()) swap(A, B);
        int M = A.size(), N = B.size();
        vector<int> dp(N + 1, 0);
        int ans = 0;

        for(int i = 0; i < M; i++) {
            for(int j = N - 1; j >= 0; j--) {

                if (A[i] == B[j]) {
                    dp[j + 1] = 1 + dp[j];
                } else {
                    dp[j + 1] = 0;
                }

                ans = max(ans, dp[j + 1]);
            }

        }

        return ans;
    }
};