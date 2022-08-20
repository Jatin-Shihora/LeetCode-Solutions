class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        stations.push_back({target, 0});
        priority_queue<int, vector<int>, less<int>> pq;
        int res = 0, curFuel = startFuel;
        for (int i = 0; i < stations.size(); ++i)
        {
            while(curFuel < stations[i][0])
            {
                if (pq.empty())
                    return -1;
                curFuel += pq.top();
                ++res;
                pq.pop();
            }
            pq.push(stations[i][1]);
        }
        return res;
    }
};