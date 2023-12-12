class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int biggest = 0 , secondBiggest = 0; 
        for(int num:nums){
            if(num > biggest){
                secondBiggest =biggest;
                biggest = num;
            }else {
                secondBiggest = max(secondBiggest, num);
            }
        }
        return (biggest - 1) * (secondBiggest -1);
    }
};