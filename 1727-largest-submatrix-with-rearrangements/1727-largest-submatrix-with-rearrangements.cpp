// Treat every column in the matrix as a height bar, where the base of that height represents total number of consecutives ones above it included himself. 
//   [[0,0,1],
//    [1,1,1],
//    [1,0,1]]
// -h>[2,0,3] -> sort -> [3,2,0] -> iterate over this sorted row and consider the largest submatrix from it -> at col 0 height of 3. here the base is 3 but with that base we have only omne col so arear 3.  Now check at col 1 with base height as 2. So we have cols where base hight can be 2 so area=4. At col 3 the base height should be 0 and thats the only col which has the base heght 0, so area =0. Thus the max ans is 4.

class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 0;
        for (int row = 0; row<m; row++){
            for(int col = 0; col<n; col++){
                if(matrix[row][col] != 0 && row > 0){
                    matrix[row][col] += matrix[row-1][col];
                }
            }
            
            vector<int> currRow = matrix[row];
            sort(currRow.begin(), currRow.end(), greater());
            for(int i=0; i<n;i++){
                ans = max(ans, currRow[i] * (i+1));
            }
        }
        return ans;
    }
};