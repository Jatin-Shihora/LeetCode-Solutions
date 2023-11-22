// We can think of the given matrix as a tree and use BFS to solve this problem.

// The top-left number, nums[0][0], is the root node. nums[1][0] is its left child and nums[0][1] is its right child. Same analogy applies to all nodes nums[i][j].

// Note that nums[i][j] is both the left child of nums[i-1][j] and the right child of nums[i][j-1]. To avoid double counting, we only consider a number's left child when we are at the left-most column (j == 0).

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        int m = nums.size();

        deque<pair<int, int>> queue;
        queue.push_back({0, 0});

        while (!queue.empty()) {
            int row = queue.front().first;
            int col = queue.front().second;
            queue.pop_front();

            ans.push_back(nums[row][col]);

            // Add the number at the bottom if we are at column 0
            if (col == 0 && row + 1 < m) {
                queue.push_back({row + 1, col});
            }

            // Add the number on the right
            if (col + 1 < nums[row].size()) {
                queue.push_back({row, col + 1});
            }
        }

        return ans;
    }
};