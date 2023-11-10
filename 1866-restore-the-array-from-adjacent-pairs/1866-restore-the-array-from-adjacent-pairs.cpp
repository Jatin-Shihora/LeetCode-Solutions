class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> ps;
        for (auto &p : adjacentPairs) {
            ps[p[0]].push_back(p[1]);
            ps[p[1]].push_back(p[0]);
        }
        vector<int> res;
        for (auto &p : ps) {
            if (p.second.size() == 1) {
                res.push_back(p.first);
                res.push_back(p.second[0]);
                break;
            }
        }
        while (res.size() < adjacentPairs.size() + 1) {
            auto tail = res.back(), prev = res[res.size() - 2];
            auto &next = ps[tail];
            if (next[0] != prev)
                res.push_back(next[0]);
            else
                res.push_back(next[1]);
        }
        return res;
    }
};