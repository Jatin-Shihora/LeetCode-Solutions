class Solution {
public:
    bool isPalindrome(string& s) {
        int start = 0;
        int end = s.size() - 1;
        
        while (start <= end) {
            // Return false if the characters are not the same.
            if (s[start] != s[end]) {
                return false;
            }
            
            start++;
            end--;
        }
        
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            if (isPalindrome(s)) {
                return s;
            }
        }
        
        return "";
    }
};