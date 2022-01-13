class Solution {
    static bool compare(vector<int> &v1, vector<int> &v2){ return v1[1] < v2[1]; }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n <= 1) return n;
        sort(points.begin(), points.end(), compare);
        
        int ans=1, prev=points[0][1];
        
        for(int i=1; i<n; i++){
            if(points[i][0] <= prev) continue;
            
            ans++;
            prev = points[i][1];
        }
        
        return ans;
    }
};