// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  //helper function 
  string Hexadecimal(int n){
      string ans;
      while(n){
        int temp = n%16;
        n/=16;
        if(temp>=10) ans+=(char)('a'+temp-10);
        else ans+= (char)('0'+temp);
      }
      return ans;
      
  }
    string encryptString(string S) {
        // code here
        int len = S.length();
        string ans;
        for(int i=0;i<len;i++){
            char curr = S[i];
            int count = 0;
            while(S[i]==curr){
                count+=1;
                i+=1;
                if(i==len) break;
            }
            i-=1;
            ans+=curr+Hexadecimal(count);
        }
        //reverse
        int low=0,high=ans.length()-1;
        while(low<high) swap(ans[low++],ans[high--]);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends