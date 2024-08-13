class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int arraySize = nums.size();

        // Largest element in the sorted array
        int maxElement = nums[arraySize - 1];

        // Maximum possible distance
        int maxPossibleDistance = maxElement * 2;

        // Initialize arrays for prefix counts and value counts
        vector<int> prefixCount(maxPossibleDistance, 0);
        unordered_map<int, int> valueCount;

        // Populate the prefixCount array
        int index = 0;
        for (int value = 0; value < maxPossibleDistance; ++value) {
            while (index < arraySize && nums[index] <= value) {
                ++index;
            }
            prefixCount[value] = index;
        }

        // Populate the valueCount map
        for (int i = 0; i < arraySize; ++i) {
            ++valueCount[nums[i]];
        }

        // Binary search for the k-th smallest distance
        int low = 0, high = maxElement;
        while (low < high) {
            int mid = (low + high) / 2;

            // Count pairs with distance <= mid
            int count = countPairs(nums, prefixCount, valueCount, mid);

            // Adjust binary search bounds based on count
            if (count < k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }

private:
    // Count number of pairs with distance <= m
    int countPairs(vector<int>& nums, vector<int>& prefixCount,
                   unordered_map<int, int>& valueCount, int maxDistance) {
        int count = 0;
        int arraySize = nums.size();
        int index = 0;

        while (index < arraySize) {
            int currentValue = nums[index];
            int valueCountForCurrent = valueCount.at(currentValue);

            // Calculate pairs involving current value with distance <=
            // maxDistance
            int pairsWithLargerValues =
                prefixCount[currentValue + maxDistance] -
                prefixCount[currentValue];
            int pairsWithSameValues =
                valueCountForCurrent * (valueCountForCurrent - 1) / 2;

            count += pairsWithLargerValues * valueCountForCurrent +
                     pairsWithSameValues;

            // Skip duplicate values
            while (index + 1 < arraySize && nums[index] == nums[index + 1]) {
                ++index;
            }
            ++index;
        }
        return count;
    }
};