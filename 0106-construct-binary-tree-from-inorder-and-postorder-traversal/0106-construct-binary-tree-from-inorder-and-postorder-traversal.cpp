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
    unordered_map<int,int>m ; 
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int start, int end, int &postIndex)     {
        if(start>end) return NULL;
        int inorderIndex = m[postorder[postIndex]];
        
        TreeNode* root = new TreeNode(inorder[inorderIndex]);
        
        (postIndex)--;
        root->right = solve(inorder,postorder,inorderIndex+1,end,postIndex);
        root->left = solve(inorder,postorder,start,inorderIndex-1,postIndex);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i =0; i<inorder.size();i++){
            m[inorder[i]] = i;
        }
        int postIndex = postorder.size()-1;
        return solve(inorder,postorder, 0, postorder.size()-1,postIndex);
    }
};