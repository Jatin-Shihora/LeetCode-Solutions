class Solution {
private:
    // setting a few class variables, so that we do not have to pass them down all the time in the recursive dfs calls
    int target;
    vector<vector<int>> res;
    vector<int> tmp;
    
    void dfs(vector<vector<int>>& graph, int currNode = 0) {
	    // updating tmp
        tmp.push_back(currNode);
		// and either updating res with it if target is met
        if (currNode == target) res.push_back(tmp);
		// or callling dfs again recursively
        else for (int node: graph[currNode]) {
            dfs(graph, node);
        }
        // backtracking with tmp
		tmp.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size()-1;
        dfs(graph);
        return res;
    }
};