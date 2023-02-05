class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.size(), n=p.size(), i=0;
        if(m<n) return {};
        
        vector<char> countP(256,0) , countW(256,0);
        vector<int> ans;
        
        for(i; i<n; i++){
            countP[p[i]]++;   
            countW[s[i]]++;
        }
        for(i ; i<m;i++){
            if(countP == countW) ans.push_back(i-n);
            countW[s[i]]++;
            countW[s[(i-n)]]--;
        }
        if(countP == countW) ans.push_back(m-n);
        
        return ans;
    }
};