class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s; 
        vector<int> left_bound(n,0),right_bound(n,n); 
        for(int i=0;i<n;i++) {
            while(!s.empty() && heights[i]<=heights[s.top()])  s.pop();
            if(s.empty())  left_bound[i]=0;
            else  left_bound[i] = s.top()+1;
			
            s.push(i);
        } 
        while(!s.empty()) s.pop();
        for(int i=n-1; i>=0; i--)  {
            while(!s.empty() && heights[i]<=heights[s.top()])  s.pop();
            if(s.empty()) right_bound[i] = n-1;
            else  right_bound[i] = s.top()-1;
            s.push(i);
        }
        int maxi = 0, area;
        for(int i=0; i<n; i++) {
            area = (right_bound[i]-left_bound[i]+1)*heights[i];
            maxi = max(maxi, area);
        }
        return maxi; 
    }
};