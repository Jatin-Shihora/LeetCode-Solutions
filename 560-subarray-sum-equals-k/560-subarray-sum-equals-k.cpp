class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cumulated_sum = 0;
        map<int,int> recorder;
        int cnt = 0;
        recorder[0]++;
        for(int i=0;i<nums.size();i++){
            cumulated_sum += nums[i];
            cnt += recorder[cumulated_sum-k];
            recorder[cumulated_sum]++;
        }
        return cnt;
    }
};