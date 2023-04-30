/*
We would use union-find to solve this problem for one person. For two (or more) people, we first populate our "shared" disjoined set, using type 3 edges.

Then, we process Alice and Bob independently, using the "shared" disjoined set as a starting point.

Every time we find a non-redundant edge, we increment used. We also check that the graph is fully connected for each person.

In the end, we can remove total - used edges.
*/
class Solution {
public:
    int find(vector<int> &ds, int i) {
        return ds[i] < 0 ? i : ds[i] = find(ds, ds[i]);
        }
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        vector<int> ds_both(n + 1, -1);
        int used = 0;
        for (int type = 3; type > 0; --type) {
            auto ds_one = ds_both;
            auto &ds = type == 3 ? ds_both : ds_one;
            for (auto &e : edges)
                if (e[0] == type) {
                    int i = find(ds, e[1]), j = find(ds, e[2]);
                    if (i != j) {
                        ++used;
                        if (ds[j] < ds[i])
                            swap(i, j);
                        ds[i] += ds[j];
                        ds[j] = i;
                    }
                }
            if (type != 3 && ds[find(ds, 1)] != -n)
                return -1;
        }
        return edges.size() - used;
    }
};