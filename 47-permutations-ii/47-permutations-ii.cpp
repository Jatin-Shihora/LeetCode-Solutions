class Solution {
public:
    void recurPermuteSwap(int ind,vector<int>& nums, vector<vector<int>>& ans){
        if(ind == nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=ind; i<nums.size();i++){
            if(i!=ind && nums[i]==nums[ind]) continue;
            swap(nums[ind],nums[i]);
            recurPermuteSwap(ind+1,nums,ans);
        }    
        for(int i=nums.size()-1;i>ind;i--){
            swap(nums[ind],nums[i]);
        }
        
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        recurPermuteSwap(0,nums,ans);//Initial Recursion call
        return ans;
    }
};