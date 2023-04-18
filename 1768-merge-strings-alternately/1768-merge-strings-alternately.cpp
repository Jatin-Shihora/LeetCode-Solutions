class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        int i=0, j=0;
        string res = "";
        while(i<n || j<m){
            if(i<n) res.push_back(word1[i++]);
            if(j<m) res.push_back(word2[j++]);
        }
        return res;
    }
};