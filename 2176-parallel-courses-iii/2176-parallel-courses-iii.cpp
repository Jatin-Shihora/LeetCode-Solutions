class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> inDegree(n);
        vector<vector<int>> graph(n, vector<int>());
        for (auto& edge : relations) {
            int prev = edge[0] - 1, next = edge[1] - 1;
            graph[prev].push_back(next);
            inDegree[next]++;
        }
        
        vector<int> dist(n);
        queue<int> q;
        for (int u = 0; u < n; ++u) {
            if (inDegree[u] == 0) {
                q.push(u);
                dist[u] = time[u];
            }
        }
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : graph[u]) {
                dist[v] = max(dist[v], dist[u] + time[v]); // Update `dist[v]` using the maximum dist of the predecessor nodes
                if (--inDegree[v] == 0) 
                    q.push(v);
            }
        }
        return *max_element(dist.begin(), dist.end());
    }
};