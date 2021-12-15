// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
    queue<int> q;
    vector<long long> res;
    
    int si, ei; /*starting index, ending index*/
    
    for(ei=0; ei<k; ei++)
        if(arr[ei]<0)
            q.push(arr[ei]);
            
    for(si=0; ei<=n; si++, ei++){
        res.push_back(q.empty() ? 0 : q.front());
        if(arr[si] == q.front())
            q.pop();
        if(arr[ei] < 0)
            q.push(arr[ei]);
    }
    
    return res;
 }