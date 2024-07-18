class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Count frequencies
        for (int num : nums) {
            freq[num]++;
        }

        // Create a vector of pairs (number, frequency)
        vector<pair<int, int>> numFreqPairs;
        for (const auto& pair : freq) {
            numFreqPairs.emplace_back(pair.first, pair.second);
        }

        // Sort using the custom comparison function
        sort(numFreqPairs.begin(), numFreqPairs.end(), compareFrequency);

        // Reconstruct the sorted vector
        vector<int> result;
        for (const auto& pair : numFreqPairs) {
            result.insert(result.end(), pair.second, pair.first);
        }

        return result;
    }

private:
    unordered_map<int, int> freq;

    // Custom comparison function
    static bool compareFrequency(const pair<int, int>& a,
                                 const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first > b.first; // If frequencies are equal, sort in
                                      // descending order of values
        }
        return a.second < b.second; // Sort by frequency in ascending order
    }
};