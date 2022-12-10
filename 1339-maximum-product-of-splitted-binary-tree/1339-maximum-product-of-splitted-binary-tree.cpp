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
private:
    long long ans = 0, totalSum = 0; 
public:
    //dfs to calculate the total sum of all nodes in the Binary Tree.
    int maxProduct(TreeNode* root) {
        totalSum = dfs(root);
        dfs(root);
        return ans % int(1e9+7);
    }
    
    int dfs(TreeNode* root){
        if(root == nullptr) return 0;
        //dfs in post order to calculate sum of each sub-tree
        int currSum = dfs(root->left) + dfs(root->right) + root->val;
        //x=total sum a=subtree1 b=subtree2
        //x=a+b ;; b=x-a
        //Thus ans = max(ans, b * a);
        ans = max(ans,(totalSum - currSum) * currSum);
        return currSum;
    }
};