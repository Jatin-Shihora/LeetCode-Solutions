class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> map_ans;
        int n = strs.size();
        int i=0; 
        while(i<n){
            string a = strs[i];
            sort(a.begin(),a.end());
            map_ans[a].push_back(strs[i]);
            i++;
        }
        for(auto i=map_ans.begin();i!=map_ans.end();i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};