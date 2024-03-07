class Solution:
    def pivotInteger(self, n: int) -> int:
        precompute = [0] * 1001

        if precompute[1] == 0:
            for i in range(1, 1001):
                sum_val = i * (i + 1) // 2

                j = 1
                while j * j < sum_val:
                    j += 1

                precompute[i] = j if j * j == sum_val else -1

        return precompute[n]