//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
/*
Just traverse through the string T 
Two Case Arise - 
When S[i]==T[j] , so just continue
When T[j] = some digits , So, Shift i by those digits value.
*/
class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int i=0,j=0;
        //When S[i]==T[j] , so just continue
        while(i<S.length() & j<T.length()){
            if(S[i]==T[j]){
                i++;
                j++;
                continue;
            }
            int count=0;
            //When T[j] = some digits , So, Shift i by those digits value.
            while(j<T.length() && isdigit(T[j])){
                count = count*10 + (T[j]-'0');
                j++;
            }
            i+=count;
            if(count==0) return 0;
        }
        return i==S.length() && j==T.length();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends