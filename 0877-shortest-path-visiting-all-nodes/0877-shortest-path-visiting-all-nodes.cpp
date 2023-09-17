class Solution {
public:
    
    int dis[15][15];
    int dp[1<<13][13];
    
    void floyd(int n) {
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    dis[i][j] = min(dis[i][j], dis[i][k]+dis[k][j]);
    }
    int DP(int n) {
        memset(dp, 0x3f, sizeof(dp));
        for (int i=0; i<n; i++)
            dp[1<<i][i] = 0;
        for (int group=1; group<(1<<n); group++)
            for (int u=0; u<n; u++)
                for (int v=0; v<n; v++) {
                    int src = 1 << u, dst = 1 << v;
                    if ((group & src) && !(group & dst))
                        dp[group|dst][v] = min(dp[group][u] + dis[u][v], dp[group|dst][v]);
                }
        int min_dis = 0x3f3f3f3f;
        for (int i=0; i<n; i++)
            min_dis = min(dp[(1<<n)-1][i], min_dis);
        return min_dis;
    }
    
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        memset(dis, 0x3f, sizeof(dis));
        for (int i=0; i<n; i++) {
            int to_size = graph[i].size();
            for (int j=0; j<to_size; j++) {
                int u = i, v = graph[i][j];
                dis[u][v] = 1;
            }
        }
        floyd(n);
        int min_dis = DP(n);
        return min_dis;
    }
};