class Solution {
public:
void solve(vector<string> &chessBoard, vector<vector<string>> &ans, vector<int> &lr, vector<int> &ud, vector<int> &ld, int col, int n){
        if(col == n){
            ans.push_back(chessBoard);
        }
        
        for(int row = 0; row<n; row++){
            if(!lr[row] && !ud[n-1 + col - row] && !ld[row+col]){
                chessBoard[row][col] = 'Q';
                lr[row] = 1;
                ud[n-1 + col - row] = 1;
                ld[row+col] = 1;
                solve(chessBoard, ans, lr, ud, ld, col+1, n);
                chessBoard[row][col] = '.';
                lr[row] = 0;
                ud[n-1 + col - row] = 0;
                ld[row+col] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> chessBoard(n);
        string s(n, '.');
        for(int i = 0; i<n; i++){
            chessBoard[i] = s;
        }
        
        vector<int> lr(n, 0), ud(2*n - 1, 0), ld(2*n-1, 0);
        solve(chessBoard, ans, lr, ud, ld, 0, n);
        return ans;
    }
};