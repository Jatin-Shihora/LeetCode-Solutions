class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        //forming our adjacency list or graph !
        for(auto it : flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        //{stops,{node,dist}}
        queue<pair<int,pair<int,int>>> q;
        vector<int> dist(n,1e9);
        q.push({0,{src,0}});
        dist[src]=0;
        while(!q.empty()){
            auto it = q.front();
            int stops =it.first;
            int node= it.second.first;
            int cost= it.second.second;
            q.pop();
            //if already crossed our maximum 'k' stops criteria
            if(stops>k) continue;
            for(auto x: adj[node]){
                int adjNode= x.first;
                int edjW = x.second;
                //checking the condition if current path gives min
                // distance for a particular node
                if(cost+edjW< dist[adjNode] and stops<=k){
                    dist[adjNode]= cost +edjW;
                    //increase the stops while adding a new entry
                    q.push({stops+1,{adjNode,cost +edjW}});
                }
            }
        }
        //answer return
        if(dist[dst]== 1e9) return -1;
        else return dist[dst];
    }
};