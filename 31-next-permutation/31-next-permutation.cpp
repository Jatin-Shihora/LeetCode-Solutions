class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),k , l ;
        //k=break point 
        //Finding the break point                       
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]) break;
        }
        if(k<0) {
            reverse(nums.begin(),nums.end());
            return;
        }
        //finding the just greater element than k  
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]) break;
            }
        }
        //swap those above both index
        swap(nums[k],nums[l]);
        //Now reverse from the index of l
        reverse(nums.begin()+k+1, nums.end());
    }
};