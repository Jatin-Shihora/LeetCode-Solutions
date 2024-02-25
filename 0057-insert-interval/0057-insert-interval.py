class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        n = len(intervals)
        target = newInterval[0]
        left, right = 0, n - 1

        # Binary search to find the position to insert newInterval
        while left <= right:
            mid = (left + right) // 2
            if intervals[mid][0] < target:
                left = mid + 1
            else:
                right = mid - 1

        # Insert newInterval at the found position
        intervals.insert(left, newInterval)

        i = 0
        while i < len(intervals):
            currentStart, currentEnd = intervals[i][0], intervals[i][1]
            # Check for overlap with the previous interval
            if i > 0 and intervals[i - 1][1] >= currentStart:
                # If there is an overlap with the previous interval, merge them
                previousStart, previousEnd = intervals[i - 1][0], intervals[i - 1][1]
                intervals[i - 1] = [previousStart, max(previousEnd, currentEnd)]
                intervals.pop(i)  # Remove the current interval after merging
            else:
                i += 1  # Move to the next interval if no overlap

        return intervals