class Solution {
  public:
    vector < int > sumEvenAfterQueries(vector < int > & nums, vector < vector < int >> & queries) {
      int len_queries = queries.size();
      int sum = 0;
      vector < int > ans(len_queries, 0);
      //calculate the sum for the even elements of the nums
      for (int & x: nums) {
        if (!(x & 1))
          sum += x;
      }
      for (int i = 0; i < len_queries; i++) {
        int val = queries[i][0];
        int idx = queries[i][1];

        //if nums[idx] is even subtract
        if (!(nums[idx] & 1))
          sum -= nums[idx];

        nums[idx] += val;

        //if nums[idx] is now even after adding val to it then add it to sum
        if (!(nums[idx] & 1))
          sum += nums[idx];
        //save to the ans vector
        ans[i] = sum;
      }
      return ans;
    }
};