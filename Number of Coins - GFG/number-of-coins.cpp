// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int dp[V+1];
	    dp[0] = 0 ;
	    for(int i=1;i<=V;i++) dp[i] = INT_MAX;
	    
	    for(int i=1;i<=V;i++){
        for(int j=0;j<M;j++){
            if(coins[j]<=i){
                int res = dp[i-coins[j]];
                if(res!=INT_MAX)
                    dp[i] = min(dp[i],res+1);
            }
        }
    }
	    return dp[V]==INT_MAX?-1:dp[V];
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends