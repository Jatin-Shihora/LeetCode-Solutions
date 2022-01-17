// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

/*

Without using Trie, cause haven't learnt Trie yet.
Logic:

1 create a hash-map and store reverse of all strings and index.
2 iterate over all strings, and find all prefix and suffix.
3 for every prefix, if the prefix is a palindrome, check if corresponding suffix
  is in hash-map and the index if not equal to current index, return True.
4 repeat the logic in step 3, but now check if suffix is palindrome and the 
  prefix is in hash-map.
5 return False, indicating that there are no pairs.

*/

class Solution{   
  public:
    bool ispalindrome(string s){
       string a=s;
       reverse(a.begin(),a.end());
       if(s==a)return true;
       else return false;
   }
   bool palindromepair(int n, string arr[]) {
       // code here
       unordered_map<string,int>m;
       for(int i=0;i<n;i++){
           auto s=arr[i];
           reverse(s.begin(),s.end());
           m.insert({s,i});
           //m[s]=i;
       }
       for(int i=0;i<n;i++){
           for(int j=0;j<arr[i].size();j++){
               string s1=arr[i].substr(0,j);
               string s2=arr[i].substr(j);
               if(m.count(s1)&&ispalindrome(s2)&&m[s1]!=i){
                   return true;
               }
               if(m.count(s2)&&ispalindrome(s1)&&m[s2]!=i){
                   return true;
               }
           }
       }
       return false;
   }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends