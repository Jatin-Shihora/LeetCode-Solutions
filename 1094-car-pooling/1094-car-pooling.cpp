class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> curr(1001);
        int sum = 0;
        for(auto a : trips){
            curr[a[1]] += a[0];
            curr[a[2]] -= a[0];
        }
        for(int i = 0; i <= 1000; i++){
            sum += curr[i];
            if(sum > capacity) return false;
        }
        return true;
    }
};