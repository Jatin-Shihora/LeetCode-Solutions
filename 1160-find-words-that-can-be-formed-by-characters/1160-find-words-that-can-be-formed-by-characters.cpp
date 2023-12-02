class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> counts;
        for (char c : chars) {
            counts[c]++;
        }
        
        int ans = 0;
        for (string word : words) {
            unordered_map<char, int> wordCount;
            for (char c : word) {
                wordCount[c]++;
            }
            
            bool good = true;
            for (auto& [c, freq] : wordCount) {
                if (counts[c] < freq) {
                    good = false;
                    break;
                }
            }
            
            if (good) {
                ans += word.size();
            }
        }
        
        return ans;
    }
};