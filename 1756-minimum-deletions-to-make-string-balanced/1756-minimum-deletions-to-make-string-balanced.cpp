class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        std::stack<char> charStack;
        int deleteCount = 0;

        // Iterate through each character in the string
        for (int i = 0; i < n; i++) {
            // If stack is not empty, top of stack is 'b', and current char is 'a'
            if (!charStack.empty() && charStack.top() == 'b' && s[i] == 'a') {
                charStack.pop();  // Remove 'b' from stack
                deleteCount++;    // Increment deletion count
            } else {
                charStack.push(s[i]);  // Push current character onto stack
            }
        }

        return deleteCount;
    }
};