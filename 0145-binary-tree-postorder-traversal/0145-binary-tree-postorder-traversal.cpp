class Solution {
public:
    void postorderTraversalHelper(TreeNode* currentNode, vector<int>& result) {
        if (currentNode == nullptr) return;
        postorderTraversalHelper(currentNode->left, result);
        postorderTraversalHelper(currentNode->right, result);
        result.push_back(currentNode->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorderTraversalHelper(root, result);
        return result;
    }
};
