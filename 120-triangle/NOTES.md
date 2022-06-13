In order to find the best path from the top of the input triangle array (T) to the bottom, we should be able to find the best path to any intermediate spot along that path, as well. That should immediately bring to mind a dynamic programming (DP) solution, as we can divide this solution up into smaller pieces and then build those up to our eventual solution.
​
The naive idea here might be to do a bottom-up DP approach (which is actually from the start of the path, or the top of T, to the end of the path, or the bottom of T), since that reflects the normal path progression and branching. If we do this, however, we'll need to write extra code to avoid going out-of-bounds when checking the previously completed rows of the DP array. We'll also have to then check the entire bottom row of our DP array to find the best value.
​
If we use a top-down DP approach (visually bottom to top of T), however, we can avoid having to check for out-of-bounds conditions, as we'll be going from larger rows to smaller rows. Also, we won't need to search for the best solution, because it will automatically be isolated in T[0][0].
​
Furthermore, since we'll never need to backtrack to previous rows, we can use T as its own in-place DP array, updating the values as we go, in order to achieve a space complexity of O(1) extra space.
​
In order to accomplish this, we'll just need to iterate backwards through the rows, starting from the second to the last, and figure out what the best path to the bottom would be from each location in the row. Since the values in the row below will already represent the best path from that point, we can just add the lower of the two possible branches to the current location (T[i][j]) at each iteration.
​
Once we're done, we can simply return T[0][0].
​
**In C++ for loop : The tilde (~) is a bitwise NOT operator. Using ~i as a conditional is shorter and faster than using i >= 0, since ~i becomes falsy when i == -1.**