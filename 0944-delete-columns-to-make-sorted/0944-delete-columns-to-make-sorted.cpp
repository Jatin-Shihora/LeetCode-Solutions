class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int ans = 0;
        // iterate cols
        for (int col = 0; col < s[0].size(); col++) {
            // iterate rows
            for (int row = 1; row < s.size(); row++) {
                // if the character in the previous row is greater than the character in the current row
                // then we can delete this column
                if (s[row - 1][col] > s[row][col]) {
                    ans += 1;
                    break;
                }
            }
        }
        return ans;
    }
};