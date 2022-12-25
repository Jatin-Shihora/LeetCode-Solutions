class Solution {
public:
/*
Sort input nums, since we care the sum and doesn't care the order.
Calukate the prefix sum of nums, since we want to know the accumulate sum.
Binary seach each query q in query, and the index is the result.
return result res.

            upper_bound(nums.begin(), nums.end(), queries[i]) - nums.begin();
** Lower bound -> first element that is greater or equal. // we need less or greater here
** Upper bound -> returns iterator of first element that is greater than queries[i] i.e (X + 1)th iterator, but we need less or equal( i.e X'th iterator).
** nums.begin() -> returns iterator to the first element (i.e 1st iterator) ,

Therefore upper bound() - nums.begin() = (X+1)th iterator - 1st iterator = X
*/
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        for(int i=1;i<nums.size();++i)
            nums[i] += nums[i-1];
        for(int& q: queries)
            res.push_back(upper_bound(nums.begin(),nums.end(),q) - nums.begin());
        return res; 
    }
};