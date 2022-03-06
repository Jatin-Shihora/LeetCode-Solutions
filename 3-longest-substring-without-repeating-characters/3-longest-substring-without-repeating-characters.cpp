class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256,-1);
        
        int left = 0, right =0;
        int n = s.size(), len =0;
        
        while(right<n){
            if(map[s[right]]!=-1) left = max(map[s[right]]+1, left);
            
            map[s[right]] = right;
            
            len = max(len,right-left+1);
            right++;
        }
        return len;
    }
};