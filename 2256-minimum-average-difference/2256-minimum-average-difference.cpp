class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long rightSum = 0;
        //Sum of all elements in rightSum stored in rightSum
        for(auto it: nums) rightSum += it;
        
        long long leftSum=0;
        int index = 0;//index contains which INDEX have minimum Average difference.
        int min = INT_MAX;
        
        //Traverse nums & add element in leftSum and then remove that elements in rightSum to find an average of every index.
        for(int i=0;i<n;i++){
            leftSum += nums[i];
            rightSum -= nums[i];
            
            long long leftIndex = leftSum/(i+1);
            long long rightIndex = i<n-1 ? rightSum/(n-i-1) : 0;
            
            int diff = abs(leftIndex - rightIndex);
            
            //Store the index which has min avg difference
            if(diff<min){
                min = diff;
                index = i;
            }
        }
        return index;
    }
};