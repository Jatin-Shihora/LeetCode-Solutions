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
       bool hasPathSum(TreeNode* root, int sum) {
        if(!root)return false;        //here we check for the base condition ,//if tree is empty we return null.
        sum=sum-root->val;                      //Body
        if(sum==0&&!root->left&&!root->right)   //then we check condition  as per the problem statement 
            return true;                        // if it get satisfy we return true.
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);//or else we traverse further in a tree.
    }
};