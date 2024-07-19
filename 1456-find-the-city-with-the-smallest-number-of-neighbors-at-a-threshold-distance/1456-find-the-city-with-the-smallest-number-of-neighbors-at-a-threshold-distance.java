class Solution {
    public int findTheCity(int n, int[][] edges, int distanceThreshold) {
        int INF = (int) 1e9 + 7;
        List<int[]>[] adj = new List[n];
        int[][] dist = new int[n][n];
        for (int i = 0; i < n; i++) {
            Arrays.fill(dist[i], INF);
            dist[i][i] = 0;
        }
        for (int i = 0; i < n; i++) { adj[i] = new ArrayList<>(); }
        for (int[] e : edges) {
            int u = e[0];
            int v = e[1];
            int d = e[2];
            dist[u][v] = d;
            dist[v][u] = d;
        }
        floyd(n, dist);
        
        return getCityWithFewestReachable(n, dist, distanceThreshold);
    }

    void floyd(int n, int[][] dist) {
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    int getCityWithFewestReachable(int n, int[][] dist, int distanceThreshold) {
        int minCity = -1;
        int minCount = n;
        for (int i = 0; i < n; i++) {
            int curCount = 0;
            for (int j = 0; j < n; j++) {
                if (i == j) { continue; }
                if (dist[i][j] <= distanceThreshold) { curCount++; }
            }
            if (curCount <= minCount) {
                minCount = curCount;
                minCity = i;
            }
        }
        return minCity;
    }
}
