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
public:
    int maxAncestorDiff(TreeNode* root, int minV = INT_MAX, int maxV = INT_MIN) {
        // exit condition, when a leaf is met
        if (!root) return (maxV - minV);
        // updating minV and maxV
        minV = min(minV, root->val), maxV = max(maxV, root->val);
        // computing the maximum distance we would find going left and right
        return max(maxAncestorDiff(root->left, minV, maxV), maxAncestorDiff(root->right, minV, maxV));
    }
};