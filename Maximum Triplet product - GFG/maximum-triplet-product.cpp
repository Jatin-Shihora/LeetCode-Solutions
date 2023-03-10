//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
         // Complete the function
         sort(arr,arr+n);
         long long frst = arr[n-1];
         
         //product of  three greater positive elements
         long long sum1 = frst * arr[n-2] * arr[n-3];
         
         //product of two largest negative elemets and one greater positive element
         long long sum2 = frst * arr[0] * arr[1];
         
         // ans will be the maximum of these two products
         long long ans = max(sum1,sum2);
         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends