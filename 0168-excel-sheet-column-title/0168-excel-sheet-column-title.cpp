class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n > 0) {
            n--;
            int curr = n % 26;
            n = n / 26;
            ans.push_back(curr + 'A');
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};