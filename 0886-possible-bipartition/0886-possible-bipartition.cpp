class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> graph[n+1];  // adjacency list for undirected graph
        vector<int> col(n+1,-1); // to check if each vertex has been explored exactly once
        
        // create adjacency list from given edges
        for(auto &d: dislikes){
            graph[d[0]].push_back(d[1]);
            graph[d[1]].push_back(d[0]);
        }
        //BFS
        queue<int> q;
        for(int i=1;i<=n;i++){
            if(col[i]!=-1) continue;
            col[i]=0;
            q.push(i);
            
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(auto x: graph[node]){
                    if(col[x] == -1){
                        col[x] = 1 - col[node];
                        q.push(x);
                    }
                    if(col[x]==col[node]) return false;
                }
            }
        }
        return true;
    }
};