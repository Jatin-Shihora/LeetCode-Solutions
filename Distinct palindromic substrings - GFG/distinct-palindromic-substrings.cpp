// { Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
   
 public:
   bool isPalindrome(string &t){
       int n = t.size()  ; 
       
       for(int i=0;i<n;++i){
           if(t[i]!=t[n-i-1]){
               return false; 
           }
       }
       return true; 
   }
   int palindromeSubStrs(string s) {
       
       unordered_set<string>st ; 
       int n = s.length() ;  
       for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
               if(s[i]!=s[j]) continue;   // Ignoring same characters
               else{
                   string t = s.substr(i,j-i+1); 
                   if(isPalindrome(t)){
                       st.insert(t)  ; 
                   }
               }
           }
       }
       
       return st.size()  ; 
   }
};

// { Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}
  // } Driver Code Ends