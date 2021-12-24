// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int n = s.size();
        vector<int> dp(n,0);
        if(s[0]=='(' && s[1]==')')
            dp[1]=2;
        for(int i=2;i<n;i++)
            if(s[i]== ')')
                if(s[i-dp[i-1]-1]=='(')
                    dp[i] = dp[i-1] + 2 + dp[i-dp[i-1]-2];
        return *max_element(dp.begin(),dp.end());
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends