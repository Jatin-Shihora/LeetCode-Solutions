class Solution:
    def nthUglyNumber(self, n: int) -> int:
        # Set to store potential ugly numbers
        ugly_numbers_set = set()
        # Start with 1, the first ugly number
        ugly_numbers_set.add(1)

        current_ugly = 1
        for i in range(n):
            # Get the smallest number from the set
            current_ugly = min(ugly_numbers_set)
            # Remove it from the set
            ugly_numbers_set.remove(current_ugly)

            # Insert the next potential ugly numbers
            ugly_numbers_set.add(current_ugly * 2)
            ugly_numbers_set.add(current_ugly * 3)
            ugly_numbers_set.add(current_ugly * 5)

        # Return the nth ugly number
        return current_ugly