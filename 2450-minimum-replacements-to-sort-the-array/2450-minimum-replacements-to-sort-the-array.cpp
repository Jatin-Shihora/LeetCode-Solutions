class Solution {
public:
  long long minimumReplacement(vector<int>& nums) {
    int n=nums.size();
    long long ans=0, prev=nums[n-1];
    for(int i=n-2;i>=0;i--){
      int noOfTime=nums[i]/prev;   
      if((nums[i])%prev!=0){
        noOfTime++;
        prev=nums[i]/noOfTime;
      }   
      ans+=noOfTime-1;
    }
    return ans;
  }
};