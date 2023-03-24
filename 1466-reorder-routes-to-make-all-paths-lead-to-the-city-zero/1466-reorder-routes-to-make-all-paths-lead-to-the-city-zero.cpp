class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int,vector<pair<int,bool>>> mp;
        for(auto it:connections)
        {
            mp[it[0]].push_back({it[1],1});
            mp[it[1]].push_back({it[0],0});
        }
        vector<int> vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                queue<int> q;
                q.push(i);
                vis[i]=1;
                while(!q.empty())
                {
                    int node=q.front();
                    q.pop();
                    vis[node]=1;
                    for(auto it:mp[node])
                    {
                        if(!vis[it.first])
                        {
                            if(it.second==1)
                            {
                               ans++;
                            }
                            q.push(it.first);
                            vis[it.first]=1;
                        }
                    }
                }

            }
        }
        return ans;
    }
};