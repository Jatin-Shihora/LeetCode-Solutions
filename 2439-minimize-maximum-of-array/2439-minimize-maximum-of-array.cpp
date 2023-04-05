class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long sum = 0;
        long long result = 0;
        for (int index = 0; index < nums.size(); ++index) {
            sum += nums[index];
            result = max(result, (sum + index) / (index + 1));
        }
        return (int) result;
    }
};