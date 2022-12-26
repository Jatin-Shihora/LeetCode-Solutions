class Solution {
public:
    /*
The idea is to iterate backwards, i.e., right to left, and keep track of the minimum jump length required, i.e., minjump, at a position.

For the last index, the minimum jump length required would be zero because you have reached the last index. For each index or position that we go backwards(since we are iterating right to left), the minimum jump length required increases by 1.

We start from the second last index and increase minjump by 1 for each position. If at a particular index, the maximum jump length at that position is greater than or equal to the minimum jump length required, i.e., nums[i]>=minjump, then we can say that we can reach the last index from that position. Thus, we reduce the minimum jump length required to zero if the condition is satisfied so that for the next position when iterating backwards the minimum jump length required is 1 after incrementation.

Our objective now is to check if the minimum jump length required, i.e., value of minjump, after iterating through the entire array is zero which would indicate that the last index can be reached from the first index of the array.
    */
    //T & S  :O(n) and O(1)
    
    bool canJump(vector<int>& nums) {        
        int i,minjump=0;
        for(i=nums.size()-2;i>=0;i--){
            minjump++;
            if(nums[i]>=minjump)
                minjump=0;
        }
        if(minjump==0) return true;
        else return false;
    }
};