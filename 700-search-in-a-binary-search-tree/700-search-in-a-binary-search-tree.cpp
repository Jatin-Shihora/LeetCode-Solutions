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
    TreeNode* searchBST(TreeNode* root, int val) {
        //if root is null return null [Edge Case]
        if(!root) return nullptr;
        //if val is less than roots val then by bst property go towards left side of the tree.
        if(root->val > val) return searchBST(root->left,val);
        //else if val is greater than roots val then by bst property go towards right side of the tree.
        else if(val > root->val) return searchBST(root->right,val);
        // else we found the required node and we would return it
        else return root;//required node

    }
};