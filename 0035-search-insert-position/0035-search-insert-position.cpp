class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0) return 0;
		
		int n = nums.size();
		int l = 0;
		int r = n - 1;
		while(l < r){
			int m = l + (r - l)/2;
			if(nums[m] == target) return m;
			else if(nums[m] > target) r = m; // right could be the result
			else l = m + 1; // m + 1 could be the result
		}
		
		// 1 element left at the end
		// post-processing
		return nums[l] < target ? l + 1: l;
    }
};