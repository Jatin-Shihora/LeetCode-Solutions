class Solution {
    typedef pair<int, int> Timestamp;
    
public:
    int jobScheduling(const vector<int>& startTime, const vector<int>& endTime, vector<int>& profit) {
        vector<Timestamp> timestamp;
        for(int i = 0; i < startTime.size(); ++i) timestamp.push_back({startTime[i], i}); // positive means startTime
        for(int i = 0; i < endTime.size(); ++i) timestamp.push_back({-endTime[i], i}); // negative means endTime
		
        sort(timestamp.begin(), timestamp.end(), [](const Timestamp& t1, const Timestamp& t2) {
            return abs(t1.first) < abs(t2.first) || (abs(t1.first) == abs(t2.first) && t1.first < 0);
        }); // if a startTime is equal to an endTime, the endTime comes first
        
        int maxPrevious = 0, res = 0;
        for(const Timestamp& t: timestamp)
            // now profit[timestamp[i].second] stores the max profit if we choose from 0 to i, and the i-th job must be included
            if (t.first > 0) res = max(res, profit[t.second] += maxPrevious);
            else maxPrevious = max(maxPrevious, profit[t.second]);
        
        return res;
    }
};