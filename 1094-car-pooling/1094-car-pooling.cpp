class Solution {
public:
   bool carPooling(vector<vector<int>>& trips, int capacity) {
    int stops[1001] = {};
    for (auto t : trips) 
        stops[t[1]] += t[0], stops[t[2]] -= t[0];
    for (auto i = 0; capacity >= 0 && i < 1001; ++i)
        capacity -= stops[i];
    return capacity >= 0;
}
};