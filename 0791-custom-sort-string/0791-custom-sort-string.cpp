class Solution {
public:
    string customSortString(string order, string s) {
        string result = "";
        unordered_map<int,int>mp;
        for(auto &it : s){
            mp[it]++;
        }
        for(auto &it : order){
            if(mp.find(it) != mp.end())
                result.append(mp[it], it);
                mp.erase(it);
        }
        for(auto &it : mp){
            result.append(it.second,it.first);
        }
        return result;
    }
};