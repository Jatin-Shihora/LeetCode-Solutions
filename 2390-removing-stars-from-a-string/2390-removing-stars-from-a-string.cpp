class Solution {
public:
    string removeStars(string s) {
        string res;
        for(char c: s){
            if(c== '*') res.pop_back();
            else res += c;
        }
        return res;
    }
};