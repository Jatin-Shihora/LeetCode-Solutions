class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> avail;
        for(auto& w:words){avail[w]++;}
        
        vector<int> ans;
        if(s.empty() || words.empty()){return ans;}
        
        int n = words.size();
        int l = words[0].size();
        
        for(int i = 0; i + n * l <= s.size(); i++ ){\
            
            int j = 0;
            unordered_map<string, int> used;
            for(; j < n; j++){
                string sub = s.substr(i + j*l, l);
                ++used[sub];
                if(used[sub] > avail[sub]){break;}
            }
            if(j==n){ans.push_back(i);}            
        }
        return ans;
    }
};