class Solution:
    def pivotInteger(self, n: int) -> int:
        left_pointer = 1
        right_pointer = n
        sum_left = left_pointer
        sum_right = right_pointer

        if n == left_pointer:
            return n

        # Iterate until the pointers meet
        while left_pointer < right_pointer:
            # Adjust sums and pointers based on comparison
            if sum_left < sum_right:
                sum_left += left_pointer + 1
                left_pointer += 1
            else:
                sum_right += right_pointer - 1
                right_pointer -= 1

            # Check for pivot condition
            if sum_left == sum_right and left_pointer + 1 == right_pointer - 1:
                return left_pointer + 1

        return -1  # Return -1 if no pivot is found