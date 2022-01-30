// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        vector<vector<int>> arr(N, vector<int> (N-K+1,0));
        for(int i = 0; i < N; i++)
        {
            int sum = 0, k = 0;
            for(int j = 0; j < K; j++)
            {
                sum = sum + mat[i][j];
            }
            arr[i][k] = sum;
            sum = sum - mat[i][k++];
            int j = K;
            while(j<N)
            {
                
                sum = sum + mat[i][j++];
                
                arr[i][k] = sum;
                sum = sum - mat[i][k++];
            }
        }
        int mx = INT_MIN;
        for(int i = 0; i < N-K+1; i++)
        {
            int sum = 0, k = 0;
            for(int j = 0; j < K; j++)
            {
                sum = sum + arr[j][i];
            }
            mx = max(mx, sum);
            sum = sum - arr[k++][i];
            int j = K;
            while(j < N)
            {
                sum = sum + arr[j++][i];
                mx = max(mx, sum);
                sum = sum - arr[k++][i];
            }
        }
        return mx;
    }    
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends