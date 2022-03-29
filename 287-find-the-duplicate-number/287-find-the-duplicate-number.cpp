class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int index = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                index = nums[i];
                break;
            }
        }
        return index;
    }
};