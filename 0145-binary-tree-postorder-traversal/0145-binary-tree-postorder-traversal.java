class Solution {
    private void postorderTraversalHelper(TreeNode currentNode, List<Integer> result) {
        if (currentNode == null) {
            return;
        }
        postorderTraversalHelper(currentNode.left, result);
        postorderTraversalHelper(currentNode.right, result);
        result.add(currentNode.val);
    }

    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<>();
        postorderTraversalHelper(root, result);
        return result;
    }
}