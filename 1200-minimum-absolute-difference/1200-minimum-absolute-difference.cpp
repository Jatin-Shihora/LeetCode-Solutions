class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        pair<int, vector<vector<int>>> result(INT_MAX, {});
        for(int i = 0; i < arr.size() - 1; ++i)
        {
            if(arr[i + 1] - arr[i] > result.first)
                continue;
            if(arr[i + 1] - arr[i] == result.first)
                result.second.push_back({arr[i], arr[i + 1]});
            else result = {arr[i + 1] - arr[i], {{arr[i], arr[i + 1]}}};
        }
        return result.second;
    }
};