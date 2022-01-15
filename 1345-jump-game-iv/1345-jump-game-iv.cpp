class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        vector<int>visited(n,0);     // keep track of visit
        
        map<int,vector<int>>mp;      // store the index for which values are same 
        for(int i=0;i<n;i++)
        { 
            mp[arr[i]].push_back(i);
        }
        vector<int> adj[n];         //create adjancy list 
        // build graph
        for(int i=0;i<n;i++)
        {
            if(i-1>=0)
            adj[i].push_back(i-1);
            if(i+1<n)
            adj[i].push_back(i+1);
        }
        queue<int>q;
        q.push(0);
        visited[0]=1;
        // BFS transversal
		while(!q.empty())
		{
		    int u=q.front();
		    q.pop();
            if(u==n-1)
                return visited[u]-1;
		    for(int v : adj[u])
            {
                if(visited[v]==0)
                {
                    q.push(v);
                    visited[v]=visited[u]+1;
                }
		    }
            for(auto v:mp[arr[u]])
            {
                if(visited[v]==0)
                {
                    visited[v]=visited[u]+1;
                    q.push(v);
		        }
            }
            mp[arr[u]].clear();
        }
        return visited[n-1]-1;      // return distance of n-1 index from 0
       }
};