class Solution {
public:
int maxResult(vector<int>& nums, int k) {
	vector<int> dp(size(nums));
        dp[0] = nums[0];
        deque<int> q{ 0 };
        for(int i = 1; i < size(nums); i++) {
            if(q.front() < i - k) q.pop_front();         // can't reach current index from index stored in q     
            dp[i] = nums[i] + dp[q.front()];             // update max score for current index
            while(!q.empty() && dp[q.back()] <= dp[i])   // pop indices which won't be ever chosen in the future
                q.pop_back();
            q.push_back(i);                              // insert current index
        }
        return dp.back();
    }
};