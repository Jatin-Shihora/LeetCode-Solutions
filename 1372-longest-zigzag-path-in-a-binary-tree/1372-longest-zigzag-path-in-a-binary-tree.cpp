/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans = 0;
public:
    int longestZigZag(TreeNode* root) {
        dfs(root, false); // could be either true or false
        return ans;
    }
    int dfs(TreeNode* root, bool left) {
        if (!root) return -1;
        
        int l = dfs(root->left, false);
        int r = dfs(root->right, true);
        ans = max(ans, max(l + 1, r + 1));
        
        return left ? l + 1 : r + 1;
    }
};