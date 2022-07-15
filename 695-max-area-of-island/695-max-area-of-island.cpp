class Solution {
public:
   void DFS(vector<vector<int>>& grid, int i, int j, int& a)
    {
        // boundary checking
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        if(grid[i][j] == 0)
            return;
        a++;
        // mark the current as visited
        grid[i][j] = 0;
          
        // do DFS in all 4 directions
        DFS(grid, i+1, j, a);
        DFS(grid, i, j-1, a);
        DFS(grid, i-1, j, a);
        DFS(grid, i, j+1, a);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int  j = 0; j<grid[0].size();j++){
                //do DFS in case has not visited and there is a land
                if(grid[i][j]==1){
                    int a =0;
                    DFS(grid,i,j,a);
                    ans = max(ans,a);
                }
            }
        }
        return ans;
    }
};