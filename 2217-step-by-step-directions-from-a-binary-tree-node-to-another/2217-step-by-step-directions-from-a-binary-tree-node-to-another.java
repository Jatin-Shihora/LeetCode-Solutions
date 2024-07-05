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
    public String getDirections(TreeNode root, int startValue, int destValue) {
        Map<Integer, TreeNode> parentMap = new HashMap<>();
        TreeNode startNode = findStartNode(root, startValue);
        populateParentMap(root, parentMap);

        Queue<PathElement> queue = new LinkedList<>();
        queue.add(new PathElement(startNode, ""));
        Set<TreeNode> visitedNodes = new HashSet<>();
        visitedNodes.add(startNode);

        while (!queue.isEmpty()) {
            PathElement currentElement = queue.poll();

            if (currentElement.node.val == destValue) {
                return currentElement.path;
            }

            if (parentMap.containsKey(currentElement.node.val)) {
                TreeNode parentNode = parentMap.get(currentElement.node.val);
                if (!visitedNodes.contains(parentNode)) {
                    queue.add(new PathElement(parentNode, currentElement.path + "U"));
                    visitedNodes.add(parentNode);
                }
            }

            if (currentElement.node.left != null && !visitedNodes.contains(currentElement.node.left)) {
                queue.add(new PathElement(currentElement.node.left, currentElement.path + "L"));
                visitedNodes.add(currentElement.node.left);
            }

            if (currentElement.node.right != null && !visitedNodes.contains(currentElement.node.right)) {
                queue.add(new PathElement(currentElement.node.right, currentElement.path + "R"));
                visitedNodes.add(currentElement.node.right);
            }
        }

        return "";
    }

    private void populateParentMap(TreeNode node, Map<Integer, TreeNode> parentMap) {
        if (node == null) return;

        if (node.left != null) {
            parentMap.put(node.left.val, node);
            populateParentMap(node.left, parentMap);
        }

        if (node.right != null) {
            parentMap.put(node.right.val, node);
            populateParentMap(node.right, parentMap);
        }
    }

    private TreeNode findStartNode(TreeNode node, int startValue) {
        if (node == null) return null;
        if (node.val == startValue) return node;

        TreeNode leftResult = findStartNode(node.left, startValue);
        if (leftResult != null) return leftResult;

        return findStartNode(node.right, startValue);
    }

    private class PathElement {
        String path;
        TreeNode node;
        PathElement(TreeNode node, String path) {
            this.node = node;
            this.path = path;
        }
    }
}
