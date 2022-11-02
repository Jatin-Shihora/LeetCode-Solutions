class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        vector<char> mut = {'A','C','G','T'};
        unordered_set<string> dict(bank.begin(),bank.end());
        if(dict.find(end)==dict.end()) 
            return -1;
        int ans = 0;
        queue<string> q;
        q.push(start);
        
        while(!q.empty()) {
            int n = q.size();
            for(int i=0;i<n;i++) {
                string curr = q.front();
                q.pop();
                if(curr==end) 
                    return ans;
                dict.erase(curr);
                for(int j=0;j<8;j++) {
                    char c = curr[j];
                    for(int k=0;k<4;k++) {
                        curr[j] = mut[k];
                        if(dict.find(curr)!=dict.end())
                            q.push(curr);
                    }
                    curr[j] = c;
                }
            }
            ans++;
        }
        
        return -1;
    }
};