class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> mem(n + 1, vector<int>(target + 1, -1));
        return numRollsToTarget(n, k, target, mem);
    }

    int numRollsToTarget(int n, int k, int target, vector<vector<int>>& mem) {
        if (n == 0 || target < 0) return target == 0 ? 1 : 0;
        if (mem[n][target] != -1) return mem[n][target];
        int ways = 0;
        for (int i = 1; i <= k; i++) {
            ways = (ways + numRollsToTarget(n - 1, k, target - i, mem)) % 1000000007;
        }
        return mem[n][target] = ways;
    }
};
