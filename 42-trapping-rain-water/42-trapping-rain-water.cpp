class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int res=0;
        int left = 0;
        int right=n-1;
        int leftmax=0;
        int rightmax=0;
        
        while(right>=left){
            if(height[left]<=height[right]){
                if(height[left]>leftmax) leftmax=height[left];
                else res+=leftmax-height[left];
                left++;
            }else{
                if(height[right]>rightmax) rightmax=height[right];
                else res+=rightmax-height[right];
                right--;
            }
        }
        return res;
    }
};