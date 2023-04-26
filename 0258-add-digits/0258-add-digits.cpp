class Solution {
public:
    int addDigits(int num) {
        return num<10 ? num:addDigits(num/10 + num%10);
    }
};