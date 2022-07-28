class Solution {
public:
    bool isAnagram(string s, string t) {
        //Time and space:O(N) and O(1)
        if (s==t) return true;
        if (s.size()!=t.size()) return false;
        int umap[26]={};
        
        for(int i = 0 ;i<s.size();i++){
            umap[s[i]-'a']++;
            umap[t[i]-'a']--;
        }
        for(int i = 0; i<26 ; i++){
            if(umap[i]) return false;
        }
        return true;
        
    }
};