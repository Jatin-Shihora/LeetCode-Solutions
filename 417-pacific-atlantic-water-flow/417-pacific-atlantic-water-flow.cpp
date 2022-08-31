class Solution {
public:
    int m, n;
    vector<vector<int> > ans;
    vector<vector<bool> > atlantic, pacific;
    queue<pair<int, int> > q;
    vector<vector<int> > pacificAtlantic(vector<vector<int>>& mat) {
        if(!size(mat)) return ans;
        m = size(mat), n = size(mat[0]);
        atlantic = pacific = vector<vector<bool> >(m, vector<bool>(n, false));
        for(int i = 0; i < m; i++) bfs(mat, pacific, i, 0), bfs(mat, atlantic, i, n - 1);
        for(int i = 0; i < n; i++) bfs(mat, pacific, 0, i), bfs(mat, atlantic, m - 1, i);             
        return ans;
    }
    void bfs(vector<vector<int> >& mat, vector<vector<bool> >& visited, int i, int j){        
        q.push({i, j});
        while(!q.empty()){
            tie(i, j) = q.front(); q.pop();
            if(visited[i][j]) continue;
            visited[i][j] = true;
            if(atlantic[i][j] && pacific[i][j]) ans.push_back(vector<int>{i, j});
            if(i + 1 <  m && mat[i + 1][j] >= mat[i][j]) q.push({i + 1, j});
            if(i - 1 >= 0 && mat[i - 1][j] >= mat[i][j]) q.push({i - 1, j});
            if(j + 1 <  n && mat[i][j + 1] >= mat[i][j]) q.push({i, j + 1});
            if(j - 1 >= 0 && mat[i][j - 1] >= mat[i][j]) q.push({i, j - 1});
        }
    }
};