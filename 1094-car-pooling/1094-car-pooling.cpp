class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> stops(1001); 
        int max=INT_MIN;
        for (vector<int>& trip: trips){
            stops[trip[1]] += trip[0]; 
            stops[trip[2]] -= trip[0];
            if(trip[2] > max) max=trip[2];
        }
        int n = 0; 
        for (int i = 0; i <= max; ++i){
            n += stops[i]; 
            if (n > capacity) return false;
        }
        return true; 
    }
};