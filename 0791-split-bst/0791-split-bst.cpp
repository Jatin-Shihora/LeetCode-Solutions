class Solution {
public:
    vector<TreeNode*> splitBST(TreeNode* root, int target) {
        // Create dummy nodes to hold the smaller and larger parts
        TreeNode* dummySm = new TreeNode(0);
        TreeNode* curSm = dummySm;
        TreeNode* dummyLg = new TreeNode(0);
        TreeNode* curLg = dummyLg;

        // Start traversal from the root
        TreeNode* current = root;

        while (current != nullptr) {
            if (current->val <= target) {
                // Attach current node to the smaller part
                curSm->right = current;
                curSm = current;

                // Move to the right subtree
                TreeNode* nextNode = current->right;

                // Clear the right pointer of current node
                curSm->right = nullptr;

                current = nextNode;
            } else {
                // Attach current node to the larger part
                curLg->left = current;
                curLg = current;

                // Move to the left subtree
                TreeNode* nextNode = current->left;

                // Clear the left pointer of current node
                curLg->left = nullptr;

                current = nextNode;
            }
        }

        // Return the split parts as a vector
        return {dummySm->right, dummyLg->left};
    }
};
