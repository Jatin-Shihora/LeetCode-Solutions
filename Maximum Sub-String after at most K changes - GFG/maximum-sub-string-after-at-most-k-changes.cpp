//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    //code here
		int characterReplacement(string s, int k){
			int n = s.size();
			vector<int>f(26, 0);
			int start = 0, maxCount = 0, maxLength = 0;
			for(int end = 0; end < n; end++){
				maxCount = max(maxCount, ++f[s[end] - 'A']);
				while(end - start + 1 - maxCount > k){
					f[s[start]  - 'A']--;
					start++;
				}
				maxLength = max(maxLength, end - start + 1);
			}
			return maxLength;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends