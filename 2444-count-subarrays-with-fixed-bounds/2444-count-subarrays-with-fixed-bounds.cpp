class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long res = 0;
        bool minFound = false, maxFound = false;
        int start = 0, minStart = 0, maxStart = 0;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
        //If current value is less than minK or greater than maxK, new subarray starts from next index.
            if(num < minK || num > maxK){
                minFound = false;
                maxFound = false;
                start = i+1;
            }
        //Valid subarrays will contain indices of latest seen minK , maxK and begin at start.
            if(num == minK){
                minFound = true;
                minStart = i;
            }
            if(num == maxK){
                maxFound = true;
                maxStart = i;
            }
            
            if(minFound && maxFound) res += (min(minStart,maxStart) - start + 1);
        }
        return res;
    }
};