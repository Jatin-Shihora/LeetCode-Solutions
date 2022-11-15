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
    int countNodes(TreeNode* root) {
        if(root==NULL ) return  0;
        TreeNode* l= root;
        TreeNode* r= root;
        int leftH = 0, rightH=0;
        while(l){
            l=l->left;
            leftH++;
        }
        while(r){
            r=r->right;
            rightH++;
        }
        if(leftH == rightH) return (1<<leftH)-1;
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};