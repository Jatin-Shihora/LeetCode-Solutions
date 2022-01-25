// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool is_within_d(int C, int arr[], int N, int D){
        int i = 0, days = 0;
        while(i < N){
            int wt = 0;
            while(1){
                if(wt + arr[i] < C){
                    wt += arr[i++];
                }
                else if(wt + arr[i] == C){
                    i++;
                    break;
                }
                else{
                    break;
                }
            }
            days += 1;
        }
        if(days <= D)
            return true;
        return false;
    }
    
    int leastWeightCapacity(int arr[], int N, int D) {
        int lo = 1, hi = 0;
        for(int i = 0; i < N; i++){
            lo = max(lo, arr[i]);
            hi += arr[i];
        }
        while(lo < hi){
            int mid = lo + (hi - lo)/2;
            bool within_d = is_within_d(mid, arr, N, D);
            if(within_d){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
        }
        return lo;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends