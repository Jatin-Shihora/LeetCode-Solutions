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
private : 
    int res = 0;
    unordered_map<int, int> m;
    
    void rec(TreeNode* root){
        if(!root) return ; 
        m[root->val]++;
        
        if(!root->left && !root->right){
            int odd = 0;
            for(auto a: m)
                if(a.second %2 ==1) odd++;
            if(odd<=1) res++;
        }
        rec(root->left);
        rec(root->right);
        m[root->val]--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        rec(root);
        return res; 
    }
};