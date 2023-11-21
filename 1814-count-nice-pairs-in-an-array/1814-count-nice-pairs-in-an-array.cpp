// Approach
// The approach is very simple to understand.
// Since, the given formula is nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
// It can be written as nums[i] - rev(nums[i]) == nums[j] - rev(nums[j])

// So, According to the above formula, we iterate over the given array nums and store the above formula in unordered map which stores the frequency too.

// Why Unordered Map?
// Unordered map is used to store the frequency of nums[i]-rev(nums[i]). While counting each occurence of above formula, add the current count to res, which indirectly gives the count of number of pairs (i,j) which satisfies the given condition. At last print res which gives the number of required nice pairs.

 
class Solution {
public:
    int rev(int n){
        int res=0;
        while(n!=0){
            res=res*10+n%10;
            n/=10;
        }
        return res;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> um;     //to store the count of given formula
        int res=0;
        for(int i=0;i<nums.size();i++){
            int tmp=nums[i]-rev(nums[i]);        //given formula
            um[tmp]++;
            res=(res+um[tmp]-1)%1000000007;      //to count (i,j) pair indirectly
        }
        return res%1000000007;
    }
};