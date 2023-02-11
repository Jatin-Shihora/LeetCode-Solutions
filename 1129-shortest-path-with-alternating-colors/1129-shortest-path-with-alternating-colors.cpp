class Solution {
public:
vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
    vector<vector<int>> adj[n];
    for (int i = 0; i < redEdges.size(); i++){
        int u = redEdges[i][0];
        int v = redEdges[i][1];
        adj[u].push_back({v, 0});
    }
    for (int i = 0; i < blueEdges.size(); i++){
        int u = blueEdges[i][0];
        int v = blueEdges[i][1];
        adj[u].push_back({v, 1});
    }
        
    vector<int> distance(n, -1);
    distance[0] = 0;
    queue<vector<int>> pq;
    vector<vector<int>> visited(n, vector<int>(2, 0));

    pq.push({0, 0, -1});

    visited[0][0] = 1;
    visited[0][1] = 1;

    while (!pq.empty()){
        int node = pq.front()[1];
        int nodeWeight = pq.front()[0];
        int nodecolor = pq.front()[2];

        pq.pop();

        for (auto itr : adj[node]){
            int adjNode = itr[0];
            int color = itr[1];
            if (visited[adjNode][color] == 0 and color != nodecolor){
                if (distance[adjNode] == -1)
                    distance[adjNode] = nodeWeight + 1;
                pq.push({nodeWeight + 1, adjNode, color});

                visited[adjNode][color] = 1;
            }
        }
    }
    return distance;
    }
};