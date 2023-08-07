class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int row = matrix.size();
        int column = matrix[0].size();
        
        int lo = 0, hi = (row*column)-1;
        
        while(lo<=hi){
            int mid = (lo + (hi-lo)/2);
            
            if(matrix[mid/column][mid%column] == target) return true;
            
            if(matrix[mid/column][mid%column] < target) lo = mid+1;
            else hi = mid - 1;
        }
        return false;
    }
};