class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        # Calculate the minimum swaps needed to group all 1s or all 0s together
        op1 = self.min_swaps_helper(nums, 0)  # Grouping all 0s together
        op2 = self.min_swaps_helper(nums, 1)  # Grouping all 1s together
        return min(op1, op2)

    def min_swaps_helper(self, data: List[int], val: int) -> int:
        length = len(data)
        total_val_count = 0

        # Count the total number of `val` in the array
        for i in range(length - 1, -1, -1):
            if data[i] == val:
                total_val_count += 1

        # If there is no `val` or the array is full of `val`, no swaps are needed
        if total_val_count == 0 or total_val_count == length:
            return 0

        start = 0
        end = 0
        max_val_in_window = 0
        current_val_in_window = 0

        # Initial window setup: count the number of `val` in the first window of size `total_val_count`
        while end < total_val_count:
            if data[end] == val:
                current_val_in_window += 1
            end += 1
        max_val_in_window = max(max_val_in_window, current_val_in_window)

        # Slide the window across the array to find the maximum number of `val` in any window
        while end < length:
            if data[start] == val:
                current_val_in_window -= 1
            start += 1
            if data[end] == val:
                current_val_in_window += 1
            end += 1
            max_val_in_window = max(max_val_in_window, current_val_in_window)

        # Minimum swaps are the total `val` minus the maximum found in any window
        return total_val_count - max_val_in_window