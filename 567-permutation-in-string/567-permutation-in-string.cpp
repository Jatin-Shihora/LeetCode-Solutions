class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int map[26] = {0};
        for(char c : s1) map[c-'a']++;
        int j=0,i=0,count_chars=s1.size();
        while(j<s2.size()){
            if(map[s2.at(j++) - 'a']-- > 0) count_chars--;
            if(count_chars==0) return true;
            if(j-i == s1.size() && map[s2.at(i++)-'a']++ >= 0) count_chars++;
        }
        return false;
    }
};