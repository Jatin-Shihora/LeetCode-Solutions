# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def splitBST(self, root: Optional[TreeNode], target: int) -> List[Optional[TreeNode]]:
        # Base case: if root is None, return two None values
        if not root:
            return [None, None]
        
        # If root's value is greater than target, recursively split left subtree
        if root.val > target:
            left = self.splitBST(root.left, target)
            root.left = left[1]  # Attach the right part of the split to root's left subtree
            return [left[0], root]  # Return the left part and the root
        else:
            # Otherwise, recursively split right subtree
            right = self.splitBST(root.right, target)
            root.right = right[0]  # Attach the left part of the split to root's right subtree
            return [root, right[1]]  # Return the root and the right part
