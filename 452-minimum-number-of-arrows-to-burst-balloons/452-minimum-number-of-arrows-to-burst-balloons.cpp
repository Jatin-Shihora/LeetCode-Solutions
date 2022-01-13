class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;//base case if there are no balloons
        //Sort the array by end points i.e p[][endpoint]
        sort(points.begin(), points.end(), [] (auto &p1, auto&p2) {
            return p1[1] < p2[1];
        });
        //end point
        int end = points[0][1];
		
		// the reason res = 1 is that we need an arrow to destroy the last group. 
        int res = 1;
        //Traverse through all points 
        for (auto point: points)
        {
            if (point[0] <= end) continue;
            res++;
            end = point[1];
        }
        return res;
    }
};