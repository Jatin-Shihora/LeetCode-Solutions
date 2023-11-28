class Solution {
public:
    int mod = 1e9 + 7;
    
    int numberOfWays(string corridor) {
        vector<int> pos;
        for (int i = 0; i < corridor.size(); i++) {
            if (corridor[i] == 'S') {
                pos.push_back(i);
            }
        }
        
        if (pos.size() % 2 || pos.size() == 0)
            return 0;
        
        long long ans = 1;
        int prev = pos[1];
        for (int i = 2; i < pos.size(); i += 2) {
            int length = pos[i] - prev;
            ans = (ans * length) % mod;
            
            prev = pos[i + 1];
        }
        
        return ans;
    }
};