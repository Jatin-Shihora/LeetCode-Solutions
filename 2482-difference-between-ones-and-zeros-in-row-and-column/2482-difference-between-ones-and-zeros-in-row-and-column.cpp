class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
     vector<int> onesRow(m, 0);
        vector<int> onesCol(n, 0);
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                onesRow[i] += grid[i][j];
                onesCol[j] += grid[i][j];
            }
        }
        
        vector<vector<int>> diff(m,vector<int>(n,0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                diff[i][j] = 2 * onesRow[i] + 2 * onesCol[j] - n - m;
            }
        }
        return diff;
    }
};