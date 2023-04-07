//Check all the boundary lands and convert it into water. Then iterate over the grid to count all the unmarked land cells as these are our enclosed islands.

class Solution {
private: 
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<int>>& grid){
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        int drow[] = {1,0,-1,0};
        int dcol[] = {0,-1,0,1};
        
        for(int i=0;i<4;i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
                dfs(nrow,ncol,vis,grid);
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cantMoves = 0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        for(int j=0;j<m;j++){
            //first row
            if(grid[0][j]==1 && !vis[0][j]) dfs(0,j,vis,grid);
            //last row 
            if(grid[n-1][j]==1 && !vis[n-1][j]) dfs(n-1,j,vis,grid);
        }
        
        for(int i=0;i<n;i++){
            //first col 
            if(grid[i][0] && !vis[i][0]) dfs(i,0,vis,grid);
            //last col 
            if(grid[i][m-1] && !vis[i][m-1]) dfs(i,m-1,vis,grid);
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] && !vis[i][j]) cantMoves++;
            }
        }
        return cantMoves;
    }
};