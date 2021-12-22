// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // Greedy+Sorting Solution ~ O(NlogN) Time
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        long long int ans = 0 , mn=1e9;
        sort(a,a+n);
        for(int i = 0 ; i< n ; i++){
            if(a[i]<0 && k) a[i]*=-1,k--;
            ans += a[i];
            mn = min(mn,a[i]);
        }
        if(k & 1) ans -= 2*mn;
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
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends