class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     int m=matrix.size(), n=matrix[0].size();
     int right=n-1, left=0, top=0, bottom=m-1;
     vector<int> v;
        
     while(top<=bottom && left<=right){
         for(int i=left;i<=right;i++){
             v.push_back(matrix[top][i]);
         }
         top++;
         
         for(int i=top;i<=bottom;i++){
             v.push_back(matrix[i][right]);
         }
         right--;
         
         if(top<=bottom){
             for(int i=right;i>=left;i--){
                 v.push_back(matrix[bottom][i]);
             }
         bottom--;
         }
         
         if(left<=right){
             for(int i=bottom;i>=top;i--){
                 v.push_back(matrix[i][left]);
             }
         left++;
         }
     } 
     return v;
    }
};