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
/**
 Inorder Traversal + Two Pointers
Use inorder traversal to get a sorted vector of all the tree's values.
Then use two-pointer approach to find a two sum.
*/
class Solution {
public:
    vector<int> vec;
    
    void inorder(TreeNode* root){
        if(!root) return ;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int l=0,r=vec.size()-1;
        
        while(l<r){
            if(vec[l]+vec[r]==k) return true;
            else{
                if(vec[l]+vec[r]<k) l++;
                else r--;
            }
        }
        return false;
    }
    
};