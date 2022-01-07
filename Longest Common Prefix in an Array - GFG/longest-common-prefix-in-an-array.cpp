// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string res=arr[0];                         //taking 1st string in array as common prefx
        for(int i=1;i<N;i++){                      //starting from 2nd position since res is already contained with the 1st string hence no need of checking
                while(arr[i].find(res))           //iterating untill we get the common prefix
                res=res.substr(0,res.size()-1);   //reducing the string by size 1 untill we get the common prefix
        }
        return res==""?"-1":res;        //if there is no common prefix res will store nothing and will return -1 or res
    }
};
// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends