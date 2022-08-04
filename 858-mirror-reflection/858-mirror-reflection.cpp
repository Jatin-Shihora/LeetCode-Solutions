class Solution {
public:
    //Dont know how to solve :|
    int mirrorReflection(int p, int q) {
        while (p % 2 == 0 && q % 2 == 0) p >>= 1, q >>= 1;
        return 1 - p % 2 + q % 2;
    }
};