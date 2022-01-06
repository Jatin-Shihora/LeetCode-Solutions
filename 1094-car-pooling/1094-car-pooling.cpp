class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> travelling(1001);
        int maxCount = 0;
        for(auto t : trips){
            travelling[t[1]] += t[0];
            travelling[t[2]] -= t[0];
        }
        for(int i = 0; i <= 1000; i++){
            maxCount += travelling[i];
            if(maxCount > capacity) return false;
        }
        return true;
    }
};