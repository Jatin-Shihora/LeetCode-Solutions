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
    TreeNode* rec(vector<int>& nums,int start,int end){
        if(start >=  end) return NULL;
        int mid= (start+end)/2;
        return new TreeNode(nums[mid],rec(nums,start,mid),rec(nums,mid+1,end));
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return rec(nums,0,nums.size());
    }
};