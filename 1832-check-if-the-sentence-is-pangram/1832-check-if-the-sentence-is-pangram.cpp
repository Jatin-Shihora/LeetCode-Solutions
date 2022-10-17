class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> s;
        for (auto& c: sentence)
            s.insert(c);
        return s.size() == 26;
    }
};