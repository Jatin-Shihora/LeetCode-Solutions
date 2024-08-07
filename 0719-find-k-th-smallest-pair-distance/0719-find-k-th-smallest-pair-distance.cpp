class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int len = nums.size();
        int Max = *max_element(nums.begin(), nums.end());
        vector<int> bucket(Max+1,0);
        for(int i = 0; i < len; i++){
            for(int j = i+1; j < len; j++){
                ++bucket[abs(nums[i]-nums[j])];
            }
        }
        for(int i = 0; i <= Max; i++){
            k -= bucket[i];
            if(k<=0){
                return i;
            }
        }
        return -1;
    }
};