class Solution {
public:
    void _merge(vector<int>& nums, int low, int mid, int high, int &reversePairCount) {
        int leftInd = low, rightInd = mid+1, r = rightInd;
        int temp[high-low+1], tempInd = 0, counter = 0;
        // 4 6 8,  1 2 3
        while(leftInd<=mid) {
            while( r<=high && (nums[leftInd] > (long)2*nums[r]) ) counter++, r++;
            reversePairCount+= counter;
            while( rightInd<=high && nums[rightInd]<=nums[leftInd] ) {
                temp[tempInd++] = nums[rightInd++];
            }
            temp[tempInd++] = nums[leftInd++];
        }
        while(rightInd<=high) {
            temp[tempInd++] = nums[rightInd++];
        }
        for(int i=0; i<tempInd; i++) nums[low++] = temp[i];
    }

    void _mergeSort(vector<int>& nums, int low, int high, int &reversePairCount) {
        if(low < high) {
            int mid = low + (high-low)/2;
            _mergeSort(nums, low, mid, reversePairCount);
            _mergeSort(nums, mid+1, high, reversePairCount);
            _merge(nums, low, mid, high, reversePairCount);
        }
    }

    int reversePairs(vector<int>& nums) {
        int reversePairCount = 0;
        int sz = nums.size();
        if(sz<=1) return reversePairCount;
        _mergeSort(nums, 0, sz-1, reversePairCount);
        return reversePairCount;
    }
};