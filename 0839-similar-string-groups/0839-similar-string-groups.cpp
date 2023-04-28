/*
For each pair (i, j), we check if strs[i] and strs[j] is similar.
We initialize connected components = number of strings strs (because we treat each string as a connected component).
Then use UnionFind to union i and j together, if union successfully, number of connected decreased by one.
*/
class UnionFind {
    vector<int> parent;
    vector<int> size;
public:
    UnionFind(int n) {
        parent.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; ++i) parent[i] = i;
    }
    int Find(int u) {
        if (u == parent[u]) return u;
        return parent[u] = Find(parent[u]); // Path compression -> logN
    }
    bool Union(int u, int v) {
        int pu = Find(u), pv = Find(v);
        if (pu == pv) return false;
        if (size[pu] < size[pv]) { // merge u into v
            size[pv] += size[pu];
            parent[pu] = pv;
        } else {
            size[pu] += size[pv];
            parent[pv] = pu;
        }
        return true;
    }
};

class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size(), groups = n;
        UnionFind uf(n);
        for (int i = 0; i < n; ++i)
            for (int j = i + 1; j < n; ++j)
                if (isSimilar(strs[i], strs[j]) && uf.Union(i, j))
                    groups -= 1;
        return groups;
    }
    bool isSimilar(const string& str1, const string& str2) {
        int diff1 = -1, diff2 = -1;
        for (int i = 0; i < str1.size(); ++i) {
            if (str1[i] != str2[i]) {
                if (diff1 == -1) diff1 = i;
                else if (diff2 == -1) diff2 = i;
                else return false;
            }
    }
    if (diff1 == -1) return true; // str1 equal str2
    if (diff2 == -1) return false; // diff in 1 position only
    return str1[diff1] == str2[diff2] && str1[diff2] == str2[diff1];
    }
};