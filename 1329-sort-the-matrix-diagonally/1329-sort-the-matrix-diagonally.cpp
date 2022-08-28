class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        // all elements on same diagonal have same i-j result.
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> map; // min priority queue
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                map[i - j].push(mat[i][j]);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = map[i - j].top(); map[i - j].pop();
            }
        }
        return mat;
    }
};