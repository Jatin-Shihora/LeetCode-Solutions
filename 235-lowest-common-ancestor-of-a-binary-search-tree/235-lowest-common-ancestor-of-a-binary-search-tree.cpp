/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left,p,q);
        else if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right,p,q);
        else return root;
        
        return root;
    }
};