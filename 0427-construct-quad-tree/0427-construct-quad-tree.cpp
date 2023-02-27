/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* dfs( vector<vector<int>>& grid, int left, int right, int top, int bottom){
        // check if the current grid has same values
        int allValSame= true;
        for(int i=top; i<=bottom; i++){
            for(int j=left; j<=right; j++){
                if( grid[i][j] != grid[top][left]){
                    allValSame= false;
                    break;
                }
            }
            if( allValSame == false)
                break;
        }
        
        // 2 types of nodes are formed:
        // 1. when all cells have same values (its a leaf node, so isleaf=true, and val=whatever it is)
        // 2. when all cells dont have same values( its a non-leaf node, so isleaf= false, val = either 0 or 1, ur wish)
        
        if( allValSame == true)
            return new Node(grid[top][left] , 1);
        else{
            
            Node* root = new Node();
            int midLtoR= (left+right)/2;
            int midTtoB = (top+bottom)/2;
            root->topLeft= dfs( grid, left, midLtoR, top, midTtoB);
            root->topRight= dfs(grid, midLtoR+1, right, top, midTtoB);
            root->bottomLeft = dfs(grid, left,midLtoR, midTtoB+1, bottom);
            root->bottomRight = dfs(grid, midLtoR+1, right, midTtoB+1, bottom);
            
            return root;
        }
        
        
    }
    Node* construct(vector<vector<int>>& grid) {
        int n= grid.size();
        return dfs(grid, 0, n-1, 0, n-1);
    }
};
