class Solution {
public:
string removeDuplicateLetters(string s) {
    
    unordered_map<char, int> counts;
    unordered_map<char, bool> visited;
    stack<char> stk;
    
    for(auto x: s) counts[x]++;
    
    for(auto x: s) {
        
        if(visited[x]) {
            counts[x]--;
            continue;
        }
        
        while(!stk.empty() and stk.top() > x) {
            
            if(counts[stk.top()] > 1) {
                
                counts[stk.top()]--;
                visited[stk.top()] = false;
                stk.pop();
            }
            else break;
        }

        stk.push(x); 
        visited[x] = true;
    }
    
    string ans = "";
    while(!stk.empty()) {
        ans += stk.top();
        stk.pop();
    }
    
    reverse(ans.begin(),ans.end());        
    
    return ans;
}
};