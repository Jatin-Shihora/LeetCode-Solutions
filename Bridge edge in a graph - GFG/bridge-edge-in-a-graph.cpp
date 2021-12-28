// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    void DFS(int source,vector<int> adj[],vector<bool> &visited)
    {
        visited[source] = 1;
        for(auto i:adj[source])
        {
            if(!visited[i])
                DFS(i,adj,visited);
        }
    }

   //Function to find if the given edge is a bridge in graph.
   int isBridge(int V, vector<int> adj[], int c, int d) 
   {
       //ALGORITHM 
       /* STEP 1= FIND THE CONNECTED COMPONENTS IN GRAPH INITALLY
       THEN FIND THE CONNECTED COMPONENTS AFTER REMOVING THE EDGE */
       int initial = 0;
       vector<bool> visited(V,0);
       for(int i=0;i<V;i++)
       {
           if(!visited[i])
           {
               initial++;
               DFS(i,adj,visited);
           }
       }
       
       int final  = 0;
       for(int i=0;i<V;i++)
           visited[i]=0;
       adj[c].erase(remove(adj[c].begin(), adj[c].end(), d), adj[c].end());
       adj[d].erase(remove(adj[d].begin(), adj[d].end(), c), adj[d].end());
       for(int i=0;i<V;i++)
       {
           if(!visited[i])
           {
               final++;
               DFS(i,adj,visited);
           }
       }
       return (!(final==initial));
   }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends