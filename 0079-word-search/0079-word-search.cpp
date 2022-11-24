class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int col =board[0].size(), row = board.size();
        //Traverse the matrix
        for(unsigned int i=0;i<row;i++){
            for(unsigned int j=0;j<col;j++){
                //if the position on the board corresponds to starting letter, then call the search function
                if(dfs(board,i,j,word)) return true; 
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, int i, int j, string& word){
        //if there is no word
        if(!word.size()) return true;
        //if out of bounds i.e left,right,up,down then return false;
        if(i<0 || i>=board.size() || j<0 || j>= board[0].size() || board[i][j]!=word[0]) return false;
        //get character of present position
        char c = board[i][j];
        //change it to other character to avoid recursively calling the same node again and again
        board[i][j]='*';
        //copy the word from index 1 till the end [Note:index starts from  0]
        string s = word.substr(1);
        //if any of the searchers are true, return true  
        //search from the left position on the board
        //search from the right position on the board
        //search from the down position on the board
        //search from the up position on the board
    bool ret = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
        //change the character back to original character
        board[i][j] = c;
        //final ans
        return ret;
    }
};