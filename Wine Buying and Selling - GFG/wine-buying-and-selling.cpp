//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  //Do a dry run for best understanding
    long long int wineSelling(vector<int>& Arr, int N){
          long long int ans = 0, sum = 0;
          for(int i=0; i<N; i++) {
              ans += abs(sum);//Cost to transport wine till now
              sum += Arr[i];//sum will be adjusted accordingly
          }
          return ans;
     }
};


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends