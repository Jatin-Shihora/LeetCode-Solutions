class Solution {
private:
    int gcd(int a,int b){
        while(b){
            a = a%b;
            swap(a,b);
        }
        return a;
    }
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(), ans = 0;
        for(int i=0;i<n;i++){
            unordered_map<string,int> counter;
            int dup = 1;
            for (int j = i + 1; j < n; j++) {
                if (points[j][0] == points[i][0] && points[j][1] == points[i][1]) {
                    dup++;
                } else {
                    int dx = points[j][0] - points[i][0], dy = points[j][1] - points[i][1], g = gcd(dx, dy);
                    counter[to_string(dx / g) + '_' + to_string(dy / g)]++;
                }
            }
            ans = max(ans,dup);
            for(auto p: counter){
                ans = max(ans,p.second+dup);
            }
        }
        return ans;
    }
};