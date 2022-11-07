class Solution {
public:
/* You can change at the most one digit,
   so traverse from left and change the first
   encountered 6  to  9  (to increase th value of num) */
    int maximum69Number (int num) {
        string s = to_string(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='6') {
                s[i]='9';
                break;
            }
        }
        return stoi(s);
    }
};