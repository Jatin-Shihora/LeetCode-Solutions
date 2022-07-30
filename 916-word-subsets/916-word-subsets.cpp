class Solution {
public:
    //B is a subset of A
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int> count(26), tmp(26);
        int i ; 
        for(string b: B){
            tmp = counter(b);
            for(i=0;i<26;++i){
                count[i] = max(count[i], tmp[i]);
            }
        }
        
        vector<string> res;
        for (string a : A) {
            tmp = counter(a);
            for (i = 0; i < 26; ++i)
                if (tmp[i] < count[i])
                    break;
            if (i == 26) res.push_back(a);
        }
        return res;
    }
    
    vector<int> counter(string& word){
        vector<int> count(26);
        for(char c: word) count[c-'a']++;
        return count;
    }
};