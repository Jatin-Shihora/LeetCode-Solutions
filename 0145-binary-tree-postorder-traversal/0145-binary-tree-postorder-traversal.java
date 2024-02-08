/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        Deque<TreeNode> stack = new ArrayDeque<>();
        TreeNode cur = root, lastVisited = null;
        
        while (!stack.isEmpty() || cur != null) {
            if (cur != null) {
                stack.addLast(cur);
                cur = cur.left;
            } else {
                TreeNode peek = stack.peekLast();
                if (peek.right != null && peek.right != lastVisited) {
                    cur = peek.right;
                } else {
                    res.add(peek.val);
                    lastVisited = stack.removeLast();
                }
            }
        }
        
        return res;
    }
}
