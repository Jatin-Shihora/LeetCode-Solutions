class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        int n = intervals.length;
        int target = newInterval[0];
        int left = 0, right = n - 1;

        // Binary search to find the position to insert newInterval
        while (left <= right) {
            int mid = (left + right) / 2;
            if (intervals[mid][0] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Insert newInterval at the found position
        List<int[]> result = new ArrayList<>(Arrays.asList(intervals));
        result.add(left, newInterval);

        int i = 0;
        while (i < result.size()) {
            int[] currentInterval = result.get(i);
            int currentStart = currentInterval[0], currentEnd = currentInterval[1];
            
            // Check for overlap with the previous interval
            if (i > 0 && result.get(i - 1)[1] >= currentStart) {
                // If there is an overlap with the previous interval, merge them
                int[] previousInterval = result.get(i - 1);
                int previousStart = previousInterval[0], previousEnd = previousInterval[1];
                result.set(i - 1, new int[]{previousStart, Math.max(previousEnd, currentEnd)});
                result.remove(i); // Remove the current interval after merging
            } else {
                i++; // Move to the next interval if no overlap
            }
        }

        return result.toArray(new int[result.size()][]);
    }
}