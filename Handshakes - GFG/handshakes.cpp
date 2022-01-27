// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
long ncr(int n, int r) {
        long ans = 1;
        for(int i = 0; i < r; i++) 
        {
            ans *= n-i;
            ans /= i+1;
        }
        return ans;   
    }
int count(int n){
   if(n&1)	
        return 0;  //n is odd
        
   return ncr(n, n/2) / (n/2 + 1);       
   // or equal to (2n)! / ((n!)*((n+1)!)
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
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends