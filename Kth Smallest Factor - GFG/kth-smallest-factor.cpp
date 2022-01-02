// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int kThSmallestFactor(int N , int K) {
        priority_queue<int,vector<int>,greater<int>> pq;
        //to store factors in ascending order 
        for(int i=1;i*i<=N;i++){
            if(N%i==0){
                pq.push(i);
                if(i==N/i) continue;
                pq.push(N/i);
            }
        }
        //remove first k-1 facotrs
        while(pq.size() and K>1){
            pq.pop();
            K--;
        }
        return pq.size()==0 ? -1 : pq.top();
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;

        Solution ob;
        cout << ob.kThSmallestFactor(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends