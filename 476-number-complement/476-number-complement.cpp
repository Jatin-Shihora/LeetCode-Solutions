class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;
        while( mask & num ) mask = mask << 1;
        return ~num ^ mask;
    }
};