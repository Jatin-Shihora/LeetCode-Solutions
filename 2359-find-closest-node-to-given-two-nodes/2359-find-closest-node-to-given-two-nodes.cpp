class Solution {
private: 
    void BFS(vector<int> &graph, int node, vector<int> &dist){
        int step = 0;
        vector<bool> vis(graph.size());//for marking the visited nodes
        //Do bfs
        while(node!=-1 && !vis[node]){
            dist[node]=step++;
            vis[node]=true;
            node=graph[node];
        }
    }
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> dist1(n,1e9), dist2(n,1e9);
        
        //Do BFS from both the nodes
        BFS(edges,node1,dist1);
        BFS(edges,node2,dist2);
        int dist=1e9, ans=-1;

        //finding max dist from node1 and node2 and if less than dist than assigning it to ans
        for(int i=0;i<n;i++){
            if(max(dist1[i],dist2[i])<dist){
                dist = max(dist1[i],dist2[i]);
                ans = i;
            }
        }
        return ans;
    }
};