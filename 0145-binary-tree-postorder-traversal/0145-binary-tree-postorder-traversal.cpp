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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;
        stack<TreeNode*> stack;

        if (root == nullptr) return output;

        stack.push(root);
        while (!stack.empty()) {
            root = stack.top();
            stack.pop();
            output.insert(output.begin(), root->val);

            if (root->left != nullptr) stack.push(root->left);
            if (root->right != nullptr) stack.push(root->right);
        }

        return output;
    }
};