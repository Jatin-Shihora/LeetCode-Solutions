class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int map[60] = {};
        int result = 0;
        for(auto x:time){
            int t = x % 60;
            int y = (60 - t)%60;
            result += map[y];
            map[t]++;
        }
        return result;
    }
};