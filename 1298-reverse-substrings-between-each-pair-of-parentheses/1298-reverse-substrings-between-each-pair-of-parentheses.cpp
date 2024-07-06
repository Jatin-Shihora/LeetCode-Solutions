class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> opened;
        string result;
        for (char c : s) {
            if (c == '(') {
                opened.push(result.length());
            } else if (c == ')') {
                int start = opened.top();
                opened.pop();
                reverse(result.begin() + start, result.end());
            } else {
                result += c;
            }
        }
        return result;
    }
};