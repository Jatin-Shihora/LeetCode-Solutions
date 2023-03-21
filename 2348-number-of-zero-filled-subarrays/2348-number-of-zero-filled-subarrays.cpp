class Solution {
public:
    /*
Use pointer left to trace start of zero, right to trace start of non-zero, we can get n is equal to right - left and calculate count when nums[right] is not zero, and set left as right + 1 to prepare for the next calculation. Be aware of the case that no zero in the end (e.g. [0, 0, 0, 2, 0, 0]), therefore, loop it through [0, nums.size()] so the last count calculation won't be missed.
    */
    long long zeroFilledSubarray(vector<int>& nums) {
        int left = 0;
        long long count =0;
        for(int right =0;right<=nums.size();++right){
            if(right == nums.size() || nums[right]!=0){
                int n = right-left;
                count+=(long long) n*(n+1)/2;
                left = right+1;
            }
        }
        return count;
    }
};