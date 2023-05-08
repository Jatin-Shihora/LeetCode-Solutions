class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),ans=0;
        for(int i=0;i<n;i++){
            if(i!=n-i-1) ans+=mat[i][i]+mat[i][n-i-1];
            else ans+=mat[i][i];   
        }
        return ans;
    }
};