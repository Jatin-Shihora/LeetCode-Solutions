class Solution {
public:
    vector<int> parent;     
    int findParent(int node) {
        return parent[node] == node ? node : (parent[node] = findParent(parent[node]));
    }    
    void makeSameGroup(int u , int v) {
        int pu = findParent(u) ; 
        int pv = findParent(v);
        parent[pu] = pv; 
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        parent.resize(n);
        for(int i=0;i<n;i++)
            parent[i] = i; 
        
        for(auto e : edges) {
            makeSameGroup(e[0] , e[1]); 
        }                         
        return findParent(start) == findParent(end); 
    }
};