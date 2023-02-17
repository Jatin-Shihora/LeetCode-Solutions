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
    /*
    If prevVal is not -1 (i.e., we have a previous node), calculate the difference between the current node's value (node.val) and the previous node's value (prevVal), and update minDiff if this difference is smaller than the current minimum.
    */
    
    void inorder(TreeNode* root,vector<int>& storeNodeVal){
        if(root==nullptr) return;
        inorder(root -> left, storeNodeVal);
        storeNodeVal.push_back(root -> val);
        inorder(root -> right, storeNodeVal);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> storeNodeVal;
        inorder(root,storeNodeVal);
        int minDiff = INT_MAX;
        for(int i=0;i<storeNodeVal.size()-1;i++)
            minDiff = min(minDiff,storeNodeVal[i+1]-storeNodeVal[i]);
        return minDiff;
    }
};