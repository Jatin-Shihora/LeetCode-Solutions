class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size()-1, mid;
        
        // Logic that we discussed in our Algo
        while (left < right) {
            mid = (left + right) / 2;
            if ((mid % 2 && nums[mid - 1] == nums[mid]) || (!(mid % 2) && nums[mid] == nums[mid + 1])) left = mid + 1; 
            else right = mid;
        }
        
        return nums[left];
    }
};