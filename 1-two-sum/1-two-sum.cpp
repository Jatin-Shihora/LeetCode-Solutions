class Solution {
public:
    //One pass using unordered map, (a+b==target) , TC=O(n) and SC = O(n)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        for(int i=0;i<nums.size();++i){
            int b = nums[i], a = target-b;
            if(seen.count(a))
                return {seen[a],i}; //pair of (a,b)
            seen[b]=i;
        }
        return {};
    }
};