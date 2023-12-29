/*
Problem - you have to divide jobs into d days and pick job with maximum difficulty for each day and sum all picked difficulty and that sum should be minimum.

-> You can't leave any day without scheduling any task on that day.
Eg. jobDifficulty = [6,5,4,3,2,1], d = 2

You can divide it like,

day 1 = [6], day2 = [5,4,3,2,1] maximum in both days is 6, 5 and sum = 11.

Another division
day 1 = [6,5,4], day 2 = [3,2,1] maximum in both days is 6 + 3 = 9

Another optimal division of jobs
day 1 = [6,5,4,3,2], day 2 = [1] maximum in day 1 = 6, and maximum in day 2 = 1, and sum of both is 6+1 = 7(this is the minimum sum that you can achieve).
*/

class Solution {
public:
    int minDifficulty(vector<int>& k, int d) {
        if (d > k.size()) return -1;

        // we now have a cache!
        // don't really need a row for the last day
        vector<vector<int>> cache(d - 1, vector<int>(k.size(), -1));

        return dfs(k, d - 1, 0, cache);
    }

private:
    int dfs(const vector<int>& k, int d, int pos, vector<vector<int>>& cache) {
        // base case
        if (d == 0) {
            int max_val = k[pos];
            for (int i = pos; i < k.size(); i++) {
                max_val = max(max_val, k[i]);
            }
            return max_val;
        }

        // just making sure we start indexing from 0
        int day = cache.size() - d;

        // we already have this in the cache, just return it right here
        if (cache[day][pos] != -1) return cache[day][pos];

        // same logic as naive recursion
        int max_val = INT_MIN;
        int min_val = INT_MAX;
        for (int i = pos; i < k.size() - d; i++) {
            max_val = max(max_val, k[i]);
            min_val = min(min_val, max_val + dfs(k, d - 1, i + 1, cache));
        }

        // but now we're also updating the cache the first time we calculate this
        return cache[day][pos] = min_val;
    }
};
