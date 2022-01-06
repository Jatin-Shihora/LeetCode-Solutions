class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> sortedmap;
        for (int i = 0;i < trips.size();++i) {
            sortedmap[trips[i][1]] += trips[i][0]; //filled seats increase when we pick up passengers
            sortedmap[trips[i][2]] -= trips[i][0]; //filled seats decrease when we drop off the passengers
        }
        for (auto it = sortedmap.begin(); it != sortedmap.end();it++) { 
            capacity -= it->second;
            
            if (capacity < 0) return false;
        }
        return true;
    }
};