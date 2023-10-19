class Solution {
public:
/*
- Scan the String from right to left. Maintain the "#" count. Increment 'count' variable if the character encountered is '#'. Otherwise decrement the count and if the count is 0, append that character to the result.
- Perform above for both the strings, compare the results and return true/false accordingly.
*/
    string getString(string &str){
        int n = str.length(), count = 0; 
        string result = "";
        for(int i=n-1;i>=0;i--){
            char ch = str[i];
            if(ch == '#') count++;
            else {
                if(count>0) count--;
                else result+=ch;
            }
        }
        return result;
    }

    bool backspaceCompare(string s, string t) {
        return getString(s) == getString(t);
    }
    
};