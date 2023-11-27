class Solution {
private:
    vector < vector < vector <long > > > memo;
    int _max=1000000007;
public:
    long  helper(int n,int row,int col)
    {
        if(row < 0  or col < 0 or row >= 4 or col >= 3 or ( row == 3 and col != 1) ) 
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if( memo[n][row][col]!=-1)
        {
            return memo[n][row][col];
        }
        memo[n][row][col]= helper(n-1,row+2,col+1) %  _max +
            helper(n-1,row+2,col-1) % _max +
            helper(n-1,row-2,col+1) % _max +
            helper(n-1,row-2,col-1) % _max + 
            helper(n-1,row+1,col+2) % _max +
            helper(n-1,row+1,col-2) % _max  +
            helper(n-1,row-1,col+2) % _max +
            helper(n-1,row-1,col-2) % _max ;
        
        return memo[n][row][col] ;
    }
    int knightDialer(int n) {
        long res{0};
        memo.resize(n+1,vector<vector<long>>(4,vector<long>(3,-1)));
        for(int i=0;i<=3;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(i==3 and j!=1)
                {
                    continue;
                }
                res = (res+helper(n,i,j)) % _max;
            }
        }
        return res;
    }
};