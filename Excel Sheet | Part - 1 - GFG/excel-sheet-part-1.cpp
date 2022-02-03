// { Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string ExcelColumn(int N)
    {
        // Your code goes here
        vector<char> v(26);
        v[0] = 'Z';
        for(int i=1; i<26; i++){
            v[i] = char('A'+i-1);
        }
        string ans = "";
        while(N>0){
            int rem = N%26;
            ans += v[rem];
            N /= 26;
            if(rem == 0){
                N -= 1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends