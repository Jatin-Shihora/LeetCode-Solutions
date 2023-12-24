class Solution {
public:
    int minOperations(string s) {
        int start0 = 0;

        for (int i = 0; i < s.size(); i++) {
            if ((i % 2 == 0 && s[i] == '1') || (i % 2 == 1 && s[i] == '0')) {
                start0++;
            }
        }

        return min(start0, static_cast<int>(s.size()) - start0);
    }
};
