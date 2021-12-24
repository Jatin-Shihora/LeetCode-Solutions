class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //base case
        if(intervals.size()<=1) return intervals;
        //resultan vector
        vector<vector<int>> result;
        //sort takes O(nlogn) time
        sort(intervals.begin(), intervals.end()); 
        //insert the the the first interval in the result
        result.push_back(intervals[0]);
         //Traverse the whole vector .Takes O(n) time
        for(int i=1; i<intervals.size(); i++) {
             //if intevals are overlapping
            if(result.back()[1] >= intervals[i][0]) result.back()[1] = max(result.back()[1] , intervals[i][1]);
            //else they are not overlapping
            else result.push_back(intervals[i]); 
        }
        return result;
    }
};