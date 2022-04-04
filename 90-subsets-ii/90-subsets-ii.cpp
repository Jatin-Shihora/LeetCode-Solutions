class Solution {
public:
    //Recursion technique 
    //Duplication logic needed
    //Recursion tree 
    
    void findSubsets(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
        ans.push_back(ds);//deep copy
        for(int i=ind; i<nums.size(); i++){
            if(i!=ind && nums[i] == nums[i-1]) continue; //duplication logic
            ds.push_back(nums[i]);//add it to ds
            findSubsets(i+1, nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; //ultimate ans
        vector<int> ds;
        sort(nums.begin(),nums.end());//to apply duplication logic we need to sort it first
        findSubsets(0,nums,ds,ans);//initial recursion setup
        return ans;
    }
};