class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<int>>adj[n+1];
        for(auto a:roads){
            adj[a[0]].push_back({a[1],a[2]});
            adj[a[1]].push_back({a[0],a[2]});
        }
        vector<bool> vis(n+1,0);
        queue<pair<int,int>>q;
        q.push({1,100000});
        vis[1]=true;
        
        int ans = 1e9;
        while(!q.empty()){
            int nodetonode = q.front().first;
            q.pop();
            
            for(auto i: adj[nodetonode]){
                ans = min(ans,i[1]);
                if(!vis[i[0]]){
                    vis[i[0]]=1;
                    q.push({i[0],i[1]});
                }
            }
        }
        return ans;
    }
};