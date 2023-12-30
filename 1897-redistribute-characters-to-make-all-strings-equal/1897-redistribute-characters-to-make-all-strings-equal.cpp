class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> counts;
        for (string word : words) {
            for (char c : word) {
                counts[c]++;
            }
        }
        
        int n = words.size();
        for (auto& [key, val] : counts) {
            if (val % n != 0) {
                return false;
            }
        }
        
        return true;
    }
};