//sort the pairs by their end in increasing order;
//at any point, choose the pair that start after the tail end, then use it as the new tail;
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), cmp);
        int cnt = 0;
        vector<int>& pair = pairs[0];
        for (int i = 0; i < pairs.size(); i++) {
            if (i == 0 || pairs[i][0] > pair[1]) {
                pair = pairs[i];
                cnt++;
            }
        }
        return cnt;
    }

private:
    static bool cmp(vector<int>& a, vector<int>&b) {
        return a[1] < b[1] || a[1] == b[1] && a[0] < b[0];
    }
};