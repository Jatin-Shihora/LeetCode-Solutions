class Solution {
    public int subarraysWithKDistinct(int[] nums, int k) {
        return slidingWindowAtMost(nums, k) - slidingWindowAtMost(nums, k - 1);
    }

    // Helper function to count the number of subarrays with at most k distinct elements.
    private int slidingWindowAtMost(int[] nums, int distinctK) {
        // To store the occurrences of each element.
        Map<Integer, Integer> freqMap = new HashMap<>();
        int left = 0, totalCount = 0;

        // Right pointer of the sliding window iterates through the array.
        for (int right = 0; right < nums.length; right++) {
            freqMap.put(nums[right], freqMap.getOrDefault(nums[right], 0) + 1);

            // If the number of distinct elements in the window exceeds k,
            // we shrink the window from the left until we have at most k distinct elements.
            while (freqMap.size() > distinctK) {
                freqMap.put(nums[left], freqMap.get(nums[left]) - 1);
                if (freqMap.get(nums[left]) == 0) {
                    freqMap.remove(nums[left]);
                }
                left++;
            }

            // Update the total count by adding the length of the current subarray.
            totalCount += (right - left + 1);
        }
        return totalCount;
    }
}