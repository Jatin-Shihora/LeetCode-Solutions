class Solution {
public:
    int minOperations(vector<string>& logs) {
        int folder_depth = 0;

        for (int i = 0; i < logs.size(); ++i) {
            if (logs[i] == "../") {
                folder_depth = std::max(0, folder_depth - 1);
            } else if (logs[i] != "./") {
                ++folder_depth;
            }
        }
        return folder_depth;
    }
};
