static int fast = [](){ios::sync_with_stdio(false);cin.tie(0);return 0;}();
static int dp[200][200];

class Solution {
public:
    
    vector<int> V;
    int n;
   
    int solve(int start, int m, int leftStones) {
        int &res = dp[start][m];
        if (res != -1) return res;
        
        res = 0;
        int taken = 0;
        int lim = min(n, start + 2 * m);

        for (int x = start; x < lim; ++x) {
            taken += V[x];
            int newM = max(m, x - start + 1);   
            res = max(res, 
                      leftStones - solve(x + 1, newM, leftStones - taken));
        }
        return res;
    }
    
    int stoneGameII(vector<int>& piles) {
       memset(dp, -1, sizeof(dp));
       V = piles; 
       n = V.size();
       return solve(0, 1, accumulate(V.begin(), V.end(), 0));
    }
};