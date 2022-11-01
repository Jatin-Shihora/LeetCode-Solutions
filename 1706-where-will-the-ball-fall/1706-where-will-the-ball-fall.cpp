class Solution {
public:
    /*
    ~ If current grid pgrid[r][c] is a \ then check it's right column -> grid[r][c+1] is same or not and Go to it's digonal place -> grid[r+1][c+1] else return -1 from there
    ~ and if it is / then check it's left column grid[r][c-1] is same or not if it same then go -> grid[r+1][c-1] else return -1 from there
    ~ If You reach last Row return Column Number <<<------- Do this task for each column
    */
    bool valid(int rsize,int csize,int r,int c){
        if(rsize<=r||csize<=c||c<0||r<0)return false;
        return true;
    }
    int DFS(vector<vector<int>>& grid,int r,int c){
        if(r==grid.size())return c;
        if(valid(grid.size(),grid[0].size(),r,c)){
            if(grid[r][c]==1){
                if(valid(grid.size(),grid[0].size(),r,c+1)&&grid[r][c+1]==1){
                    return DFS(grid,r+1,c+1);
                }
            }else{
                if(valid(grid.size(),grid[0].size(),r,c-1)&&grid[r][c-1]==-1){
                    return DFS(grid,r+1,c-1);
                }
            }
        }
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid){
        int row = grid.size(),col = grid[0].size();
        vector<int>ans(col,0);
        for(int c = 0;c<col;c++){
            ans[c] = DFS(grid,0,c);
        }
    return ans;
    }
};