class Solution {
public:
    int bitwiseComplement(int num) {
        int powerof2s = 2, temp = num;
        
        while(temp>>1) {
            temp >>= 1;
            powerof2s <<= 1;
        }
        
        return powerof2s - num - 1;
    }
};