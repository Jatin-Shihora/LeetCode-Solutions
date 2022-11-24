class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int col =board[0].size(), row = board.size();
        //Traverse the matrix
        for(unsigned int i=0;i<row;i++){
            for(unsigned int j=0;j<col;j++){
                //check if the words exists or not with the help of dfs
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
        //put current char to c
        char c = board[i][j];
        //Once assigned to c put a '*' marke at that index
        board[i][j]='*';
        //copy the word from index 1 till the end [Note:index starts from  0]
        string s = word.substr(1);
        //dfs => left || right || down || up
    bool ret = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
        //Reassign c to the '*' marked index 
        board[i][j] = c;
        //final ans
        return ret;
    }
};