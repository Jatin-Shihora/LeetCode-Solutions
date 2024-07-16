class Solution {
private:
    vector<int> postOrder(TreeNode* currentNode, int distance, int &totalCount) {
        if (!currentNode)
            return vector<int>(11);
        else if (!currentNode->left && !currentNode->right) {
            vector<int> current(11);
            // Leaf node's distance from itself is 0
            current[0] = 1;
            return current;
        }

        // Leaf node count for a given distance i
        vector<int> left = postOrder(currentNode->left, distance, totalCount);
        vector<int> right = postOrder(currentNode->right, distance, totalCount);

        vector<int> current(11);

        // Combine the counts from the left and right subtree and shift by
        // +1 distance
        for (int i = 0; i < 10; i++) {
            current[i + 1] = left[i] + right[i];
        }

        // Iterate through possible leaf node distance pairs
        for (int d1 = 0; d1 <= distance; d1++) {
            for (int d2 = 0; d2 <= distance; d2++) {
                if (2 + d1 + d2 <= distance) {
                    // If the total path distance is less than the given
                    // distance limit, then add the total number of good pairs
                    totalCount += left[d1] * right[d2];
                }
            }
        }

        return current;
    }

public:
    int countPairs(TreeNode* root, int distance) {
        int totalCount = 0;
        postOrder(root, distance, totalCount);
        return totalCount;
    }
};
In this version, 