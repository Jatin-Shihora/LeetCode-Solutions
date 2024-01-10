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
// treat the tree as a graph. First, I convert the tree to graph. Then I run a BFS to find the furthest away point which represents the answer.
class Solution {
public:
unordered_map<int,vector<int>> v;  //adjacency list

//create undirected graph for every parent-child  -> BFS
void createGraph(TreeNode* root){
    queue<pair<TreeNode*,int>> q;
    q.push({root,-1});
    while(q.size()){
        auto [node,parent]= q.front(); q.pop();
        if(parent!=-1){
            v[parent].push_back(node->val);
            v[node->val].push_back(parent);
        }
        if(node->left)  q.push({node->left,node->val});
        if(node->right) q.push({node->right,node->val});
    }   
}

int amountOfTime(TreeNode* root, int start) {
    //create graph of given tree
    createGraph(root);

    //start bfs
    queue<int> q;
    unordered_map<int,bool> seen;
    q.push(start);
    seen[start]=true;
    int time=0;
    for(;q.size();time++){
        int n= q.size();
        while(n--){
            auto node= q.front();  q.pop();
            for(auto i:v[node]){
                if(!seen[i]){
                    q.push(i);
                    seen[i]=true;
                }
            }
        }
    }
    return time-1;
}
};