class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return (n>0)&&(1073741824%n==0);
    }
};