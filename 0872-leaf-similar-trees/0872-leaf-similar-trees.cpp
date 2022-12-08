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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string t1,t2;
        //DFS for tree1
        DFS(root1,t1);
        //DFS for tree2
        DFS(root2,t2);
        //If both are same return true
        return t1==t2;
    }
    void DFS(TreeNode* root, string& s){
        if(root == NULL) return ;
        //use of "#" in this code: If you don't use hash, values like 5 13 and 51 3 would give the same string, however they are different
        if(root->left==NULL && root->right == NULL) s+=to_string(root->val)+'#';
        DFS(root->left,s);
        DFS(root->right,s);
    }
};