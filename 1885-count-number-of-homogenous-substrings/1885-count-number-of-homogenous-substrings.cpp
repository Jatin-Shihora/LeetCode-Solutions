class Solution {
public:
    int countHomogenous(string s) {
        int cnt = 0, res =0 ;
        for(int i=0;i<s.length();++i){
            if(i>0 && s[i-1]==s[i]) ++cnt;
            else cnt = 1;
            res = (res + cnt) % int(1e9+7);
        }
    return res;
    }
};