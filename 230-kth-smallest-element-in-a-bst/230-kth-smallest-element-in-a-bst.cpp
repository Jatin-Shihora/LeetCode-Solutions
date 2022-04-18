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
int kthSmallest(TreeNode* root, int &k) 
    {
        if(root==NULL) return 0;
        
        int left=kthSmallest(root->left,k);          // left recursive call
        
        if(left) return left;                      // if we get answer from left call than return it
        k--;
        if(k==0) return root->val;                 // this is kth smallest element
         
        int right=kthSmallest(root->right,k);     // right recursive call
        
        if(right) return right;                   // if we get answert from right call than return it
        
        return 0;                                 // return 0 if we not get answer from this call
    }
};