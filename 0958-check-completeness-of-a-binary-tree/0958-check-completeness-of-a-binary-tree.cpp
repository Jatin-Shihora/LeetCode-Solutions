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
    // Define the isCompleteTree function that takes a TreeNode pointer as input and returns a boolean
    bool isCompleteTree(TreeNode* root) {
        // Check if the root node is null, if so, return true (an empty tree is complete)
        if (root == nullptr)
            return true;

        // Create a queue to store the nodes of the tree in level order
        queue<TreeNode*> q{{root}};

        // Traverse the tree in level order
        while (q.front() != nullptr) {
            // Remove the first node from the queue
            TreeNode* node = q.front();
            q.pop();
            // Add the left and right child nodes of the current node to the queue
            q.push(node->left);
            q.push(node->right);
        }

        // Remove any remaining null nodes from the front of the queue
        while (!q.empty() && q.front() == nullptr)
            q.pop();

        // Check if there are any remaining nodes in the queue
        // If so, the tree is not complete, so return false
        // Otherwise, the tree is complete, so return true
        return q.empty();
    }
};