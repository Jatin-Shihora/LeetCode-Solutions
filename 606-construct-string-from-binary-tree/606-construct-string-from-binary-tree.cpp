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
    string tree2str(TreeNode* root) {
        string sub = to_string(root->val);
        if (root->left) //left check
            sub += "(" + tree2str(root->left) + ")";
        if (root->right) { //right check
            if (!root->left) sub += "()"; //left not present, but right present
            sub += "(" + tree2str(root->right) + ")"; 
        }
        return sub;
    }
};