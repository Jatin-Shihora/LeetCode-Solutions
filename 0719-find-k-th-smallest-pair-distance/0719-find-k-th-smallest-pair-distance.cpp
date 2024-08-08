#include <vector>
#include <algorithm>

class Solution {
public:
    int smallestDistancePair(std::vector<int>& nums, int k) {
        // Get the size of the input array
        int arraySize = nums.size();
        
        // Find the maximum element in the array
        int maxElement = *std::max_element(nums.begin(), nums.end());
        
        // Initialize a bucket array to store counts of each distance
        std::vector<int> distanceBucket(maxElement + 1, 0);

        // Populate the bucket array with counts of each distance
        for (int i = 0; i < arraySize; ++i) {
            for (int j = i + 1; j < arraySize; ++j) {
                // Compute the distance between nums[i] and nums[j]
                int distance = std::abs(nums[i] - nums[j]);
                
                // Increment the count for this distance in the bucket
                ++distanceBucket[distance];
            }
        }

        // Find the k-th smallest distance
        for (int dist = 0; dist <= maxElement; ++dist) {
            // Reduce k by the number of pairs with the current distance
            k -= distanceBucket[dist];
            
            // If k is less than or equal to 0, return the current distance
            if (k <= 0) {
                return dist;
            }
        }
        return -1; // Return -1 if no distance found, should not reach here
    }
};
