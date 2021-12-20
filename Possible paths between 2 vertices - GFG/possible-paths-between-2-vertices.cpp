// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
    //dfs+backtracing
  public:
    int ans,des;
    vector<bool> vis;
    void dfs(int v,vector<int> adj[]){
        if(v==des){
            ans++;
            return;
        }
        vis[v]=true;
        for(auto x:adj[v]) if(!vis[x])dfs(x,adj);
        vis[v]=false;
    }
  
    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        vis.assign(V+1,false);
        des=destination, ans=0;
        dfs(source,adj);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends