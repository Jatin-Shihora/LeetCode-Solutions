// { Driver Code Starts
// CPP program to find maximum sum
// by selecting a element from n arrays
#include<bits/stdc++.h>

using namespace std;

// To calculate maximum sum by
// selecting element from each array
int maximumSum( int n,int m, vector<vector<int>> &a);



// Driver program to test maximumSum
int main() {
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>arr[i][j];
            
        cout << maximumSum(n,m,arr)<<endl;
    
    }
    return 0;

}
// } Driver Code Ends

/*
1 traverse the vectors from last vector to first vector.
2 find the max element in the last vector and store it in mx variable.
3 and then find the max element in the vector of taking the elements which are 
 less than maximum element(mx) got before. And at last update the max element.
4 continue the process for all the vectors and update the answer at each iteration.
5 finally return the ans.
6 if any case, we didn't get the max element for any vector then it means
Maximum sum of increasing order is not possible. Just return -1.
*/
int maximumSum( int n,int m, vector<vector<int>> &a) {

    // Complete the function
    int ans = 0;
    int mx = INT_MAX;
    for(int i=n-1;i>=0;i--)
    {
        int temp = INT_MIN;
        for(int j=0;j<m;j++)
        {
            if(a[i][j] < mx) temp = max(temp, a[i][j]);
        }
        if(temp == INT_MIN) return 0;
        mx = temp;
        ans += mx;
    }
    return ans;
}