/*
Traverse all the possible starting points of haystack (from 0 to haystack.length() - needle.length()) and see if the following characters in haystack match those of needle.    
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        for(int i=0;i<=m-n;i++){
            int j=0;
            for(;j<n;j++){
                if(haystack[i+j] != needle[j]) break;
            }
            if(j==n) return i;
        }
        return -1;
    }
};