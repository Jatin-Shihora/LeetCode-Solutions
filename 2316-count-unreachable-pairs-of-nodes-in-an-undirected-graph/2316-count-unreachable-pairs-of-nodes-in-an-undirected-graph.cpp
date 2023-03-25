class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto& edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> vis(n, false);
        vector<int> sizes;
        
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                int size = 0;
                dfs(i, adj, vis, size);
                sizes.push_back(size);
            }
        }
        
        long long count = 0;
        for(int size: sizes) {
            int rest = n - size;
            count += (long long)size * (long long)rest;
        }
        
        return count / 2;
    }

private:
    void dfs(int i, vector<int> adj[], vector<bool>& vis, int& size) {
        vis[i] = 1;
        size++;
        for(int next: adj[i]) {
            if(!vis[next]) dfs(next, adj, vis, size);
        }  
    }
};