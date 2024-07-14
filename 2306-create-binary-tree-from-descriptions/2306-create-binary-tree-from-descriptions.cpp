class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        // Sets to track unique children and parents
        unordered_set<int> children, parents;
        // Map to store parent to children relationships
        unordered_map<int, vector<pair<int, int>>> parentToChildren;

        // Build graph from parent to child, and add nodes to HashSets
        for (auto& d : descriptions) {
            int parent = d[0], child = d[1], isLeft = d[2];
            parents.insert(parent);
            parents.insert(child);
            children.insert(child);
            parentToChildren[parent].emplace_back(child, isLeft);
        }

        // Find the root node by checking which node is in parents but not in children
        for (auto it = parents.begin(); it != parents.end();) {
            if (children.find(*it) != children.end()) {
                it = parents.erase(it);
            } else {
                ++it;
            }
        }
        TreeNode* root = new TreeNode(*parents.begin());

        // Starting from root, use BFS to construct binary tree
        queue<TreeNode*> queue;
        queue.push(root);

        while (!queue.empty()) {
            TreeNode* parent = queue.front();
            queue.pop();
            // Iterate over children of current parent
            for (auto& childInfo : parentToChildren[parent->val]) {
                int childValue = childInfo.first, isLeft = childInfo.second;
                TreeNode* child = new TreeNode(childValue);
                queue.push(child);
                // Attach child node to its parent based on isLeft flag
                if (isLeft == 1) {
                    parent->left = child;
                } else {
                    parent->right = child;
                }
            }
        }

        return root;
    }
};