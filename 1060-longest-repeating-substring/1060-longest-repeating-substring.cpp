class Solution {
public:
    int longestRepeatingSubstring(string s) {
        int length = s.size(); // Get the size of the string
        // Create a 2D DP table with 'length' rows and 'length' columns initialized to 0
        vector<vector<int>> dp(length, vector<int>(length, 0)); 
        int longest = 0; // Variable to store the length of the longest repeating substring

        // Iterate over the string with two pointers
        for (int i = 0; i < length; ++i) {
            for (int j = i + 1; j < length; ++j) {
                // If characters at the current position in both pointers match
                if (s[i] == s[j]) {
                    // Check if it is not the first character, then add 1 to the length of substring
                    // found till the previous characters else start with 1
                    dp[i][j] = (i > 0) ? dp[i - 1][j - 1] + 1 : 1;
                    // Update the longest substring found so far
                    longest = max(longest, dp[i][j]);
                }
                // If characters don't match, dp[i][j] remains 0 as initialized
            }
        }
        // Return the length of longest repeating substring
        return longest;
    }
};