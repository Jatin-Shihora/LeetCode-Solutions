class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        if (points.size() < 1) return 0;
        auto dist = [](int x1, int y1, int x2, int y2) {
            return abs (x1-x2) + abs(y1-y2);
        };
        
        unsigned sz = points.size();
        vector<int> minDists(sz,0);
		//Initialize
        int result = 0;
        minDists[0] = INT_MAX;
        for (auto i = 1 ; i < sz; i++) {
            minDists[i] = dist(points[0][0],points[0][1],points[i][0],points[i][1]);
        }
		
		//Build Spanning Tree
        for (auto i = 1; i < sz; i++) {
            auto it = min_element(minDists.begin(), minDists.end());
            result += *it;
            int index = it - minDists.begin();
            *it = INT_MAX;
            for (auto i = 0 ; i < sz; i++) {
                if (minDists[i] == INT_MAX) continue;
                minDists[i] = min(minDists[i], dist(points[i][0], points[i][1], points[index][0], points[index][1]));
            }
        }
        return result;        
    }
};