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
/*
Time Complexity :- O(H), where H is height of tree
Space Complexity :- O(H) as considering recursion stack, takes place in internal memory, if not consider then O(1)
*/
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val); //if the bst tree is empty create a new node for the value
        //The value which is higher than the parent node are always on the right.
        if(val > root->val) root->right = insertIntoBST(root->right,val) ; 
        //The value which is lower than the parent node are always on the left.        
        else root->left = insertIntoBST(root->left,val);
        return root;
    }
};