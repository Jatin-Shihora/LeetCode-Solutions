class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        //sort the array using built in method which gives us a TC of O(nlogn)
        sort(arr.begin(),arr.end());
        //A pair which has difference and a vector of of two points which stores the min absolute difference
        pair<int,vector<vector<int>>> result(INT_MAX,{});
        //Traverse the given array takes O(n) time
        for(int i=0;i<arr.size()-1;++i) 
        {
            //if its not a min absolute difference then use continue and jump to next iteration
            if(arr[i+1]-arr[i]>result.first) continue;
            //min diff == diff then add the pair
            if(arr[i+1]-arr[i]==result.first) result.second.push_back({arr[i],arr[i+1]});
            //else diff<min diff 
            else result={arr[i+1]-arr[i],{{arr[i],arr[i+1]}}};    
        }
        return result.second;
    }
};