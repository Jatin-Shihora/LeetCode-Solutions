class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        //base case i.e only one node is available
        if(n==1) return vector<int>{0};
        
        //Now we need to find the list of nodes for adjacency
        vector<vector<int>>graph(n);
        
        //Now count the degree of nodes
        vector<int>degree(n,0);
        
        //populate graph adjacency list and degree count of nodes
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0], b=edges[i][1];
            
            graph[a].push_back(b);
            graph[b].push_back(a);
            degree[a]++;
            degree[b]++;
        }
        queue<int>queue_degree_1;
        
        //push all the nodes with degree 1
        for(int i=0;i<n;i++) if(degree[i]==1) queue_degree_1.push(i);
        
        //MHT root nodes
        vector<int>res;
        
        //Run BFS until queue is empty
        while(!queue_degree_1.empty()){
            int n = queue_degree_1.size();
            res.clear();//clear the root nodes
            
            //This is our level order traverse
            while(n--){
                int node = queue_degree_1.front();
                queue_degree_1.pop();
                
                //add current node into the root node vector
                res.push_back(node);
                
                //NOw it's time for neighbouring nodes
                for(int i=0;i<graph[node].size();i++){
                    //decrease degree of neighbour nodes and push leaff nodes intp queue
                    degree[graph[node][i]]--;
                    if(degree[graph[node][i]]==1) queue_degree_1.push(graph[node][i]);
                }
            }
        }
        
        return res;//root nodes of MHT
    }
};