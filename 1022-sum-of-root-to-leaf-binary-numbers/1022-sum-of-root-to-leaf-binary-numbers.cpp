# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sumRootToLeaf(self, root, val=0):
        if not root: return 0  #base case
        val = val * 2 + root.val  #val = val << 1 | root->val; //Both are same it's just the bit manipulation way  
        if root.left == root.right: return val 
        return self.sumRootToLeaf(root.left, val) + self.sumRootToLeaf(root.right, val) #dfs call
        