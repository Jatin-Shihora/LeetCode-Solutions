class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=triangle.size()-2; ~i ;i--)
            for(int j=triangle[i].size()-1;~j;j--)
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
        return triangle[0][0];
    }
};