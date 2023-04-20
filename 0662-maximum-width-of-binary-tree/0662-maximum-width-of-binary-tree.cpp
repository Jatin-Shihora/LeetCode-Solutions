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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int ans = 0; //final width
        
        // use indexing method, index every node(present or not present)
        // left = (2*i + 1), right = (2*i + 2) -> 0 based indexing
        
        // {node, index}
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        int last, first;
        while(!q.empty()){
           int sz = q.size();
            int mmin = q.front().second;    // to prevent overflow by 2*i
            for(int i = 0; i < sz; i++) {
                TreeNode* node = q.front().first;
                long long index = q.front().second - mmin;
                q.pop();
                
                if(i == 0) first = index;
                if(i == sz-1) last = index;
                
                if(node->left) {
                    q.push({node->left, 2*index + 1});    
                }
                if(node->right) {
                    q.push({node->right, 2*index + 2});    
                }
            }
            ans = max(ans, last - first + 1);
        }
        return ans;
    }
};