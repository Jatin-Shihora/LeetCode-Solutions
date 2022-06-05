class Solution {
public:
int totalNQueens(int n) {
	bitset<17> col, diag, anti_diag;
	return solve(col, diag, anti_diag, 0, n);
}  
int solve(bitset<17>& col, bitset<17>& diag, bitset<17>& anti_diag, int row, int n) {
    if(row == n) return 1;
    int count = 0;
	for(int column = 0; column < n; column++)           
		if(!col[column] && !diag[row + column] && !anti_diag[row - column + n - 1]){
			col[column] = diag[row + column] = anti_diag[row - column + n - 1] = 1;    // place at (row, column)
			count += solve(col, diag, anti_diag, row + 1, n);                          // explore for the next row. 
			col[column] = diag[row + column] = anti_diag[row - column + n - 1] = 0;    // backtrack
		}                                
	return count;
}
};