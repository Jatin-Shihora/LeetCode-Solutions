class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        queue<int> q;
        q.push(1);
        int n = board.size();
        int goal = n*n;
        int ans = 0;
        while(!q.empty()) {
            int sz = q.size();
            ++ans;
            for(int i = 0; i < sz; ++i) {
                int x = q.front(); q.pop();
                for(int j = 1; j <=6; ++j) {
                    int y = x+j;
                    if (y > goal) continue;
                 
                    int r = (y-1)/n;
                    int c = (y-1)%n;
                    int & v = board[n-1-r][(r%2==0)?c:(n-1-c)];
                    if (v == 0) continue;
                    if (v > 0) {
                      y = v;
                    }  
                    if (y == goal) return ans;
                    v = 0;
                    q.push(y);
                }  
            
            }
        }
        return -1;
    }
};
