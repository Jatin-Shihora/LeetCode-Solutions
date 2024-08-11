class Solution:
    def smallestDistancePair(self, nums, k):
        nums.sort()
        array_size = len(nums)

        # Highest element in the sorted array
        max_element = nums[-1]

        # Maximum possible distance
        max_possible_distance = max_element * 2

        # Initialize arrays for prefix counts and value counts
        prefix_count = [0] * max_possible_distance
        value_count = [0] * (max_element + 1)

        # Populate prefix count and value count
        index = 0
        for value in range(max_possible_distance):
            while index < array_size and nums[index] <= value:
                index += 1
            prefix_count[value] = index
        for i in range(array_size):
            value_count[nums[i]] += 1

        # Binary search to find kth smallest distance
        left, right = 0, max_element
        while left < right:
            mid = (left + right) // 2

            # Count pairs with distance <= mid
            count = self._count_pairs(nums, prefix_count, value_count, mid)

            # Adjust binary search bounds based on count
            if count < k:
                left = mid + 1
            else:
                right = mid
        return left

    def _count_pairs(self, nums, prefix_count, value_count, max_distance):
        count = 0
        array_size = len(nums)
        index = 0

        while index < array_size:
            current_value = nums[index]
            value_count_for_current = value_count[current_value]

            # Calculate pairs involving current value with distance <= max_distance
            pairs_with_larger_values = (
                prefix_count[
                    min(current_value + max_distance, len(prefix_count) - 1)
                ]
                - prefix_count[current_value]
            )
            pairs_with_same_values = (
                value_count_for_current * (value_count_for_current - 1) // 2
            )
            count += (
                pairs_with_larger_values * value_count_for_current
                + pairs_with_same_values
            )

            # Skip duplicate values
            while index + 1 < array_size and nums[index] == nums[index + 1]:
                index += 1
            index += 1

        return count