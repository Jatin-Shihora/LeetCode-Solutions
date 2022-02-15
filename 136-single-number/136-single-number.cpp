class Solution {
public:
    int singleNumber(vector<int>& nums) {        
        // Using XOR property for Unique number
        int resultXOR = 0;                
        for(int a: nums)
            resultXOR ^= a;        
        return resultXOR;            
    }
};