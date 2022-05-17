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
TreeNode* getTargetCopy(TreeNode* orig, TreeNode* clone, TreeNode* targ) {
  return orig == nullptr ? nullptr :
    orig == targ ? clone : 
      getTargetCopy(orig->left, clone->left, targ) ?: getTargetCopy(orig->right, clone->right, targ);
}

};