class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        ans = float('inf')
        total_ones = sum(nums)

        ones_count = nums[0]
        end = 0
        for start in range(len(nums)):
            if start != 0:
                ones_count -= nums[start - 1]
            while end - start + 1 < total_ones:
                end += 1
                ones_count += nums[end % len(nums)]
            ans = min(ans, total_ones - ones_count)
        return ans