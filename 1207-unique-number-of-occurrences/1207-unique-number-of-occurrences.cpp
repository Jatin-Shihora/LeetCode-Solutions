class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> ans;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto i=mp.begin(); i!=mp.end();i++){
            ans.insert(i->second);
        }
      return ans.size()==mp.size() ?true:false;
    }
};