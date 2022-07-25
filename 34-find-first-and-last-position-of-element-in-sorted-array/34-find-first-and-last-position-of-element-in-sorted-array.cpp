class Solution {
public:
    /*
    Algo-We will be using binary seaccrh since the tc we want is O(logn) and also the array is laredy sorted so we can take the advantage of that also 
    */
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = get_first_element_position(nums, target);
        int right = get_last_element_position(nums,target);
        return left<=right ? vector<int>{left,right}:vector<int>(2,-1);
    }
private:
    int get_first_element_position(vector<int>& nums,int target){
        int left=0,right= nums.size()-1,mid;
        while(left<=right){
            mid=(right+left)/2;
            if(nums[mid]<target) left =mid+1;
            else right = mid-1;
        }
        return left;
    }
    int get_last_element_position(vector<int>& nums,int target){
        int left= 0,right = nums.size()-1,mid;
        while(left<=right){
            mid=(right+left)/2;
            if(nums[mid]<=target) left = mid+1;
            else right = mid-1;
        }
        return right;
    }
};