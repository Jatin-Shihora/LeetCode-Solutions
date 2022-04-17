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
    TreeNode * inorder(TreeNode *root,TreeNode *tmp)
    {
        if(root==NULL) return tmp;
        tmp=inorder(root->left,tmp);
        tmp->right=root;
        root->left=NULL;
        tmp=root;
        return inorder(root->right,tmp);
    }
    
    TreeNode* increasingBST(TreeNode* root) 
    {
        TreeNode* dummy=new TreeNode(0);
        TreeNode* tmp=dummy;
        inorder(root,tmp);
        return dummy->right;
    }
};