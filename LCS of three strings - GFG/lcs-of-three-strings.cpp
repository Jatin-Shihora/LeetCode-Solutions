// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int LCSof3 (string A, string B, string C, int m, int n, int s)
{
    // your code here
    int t[m+1][n+1][s+1];
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=s;k++){
                if(i==0||j==0||k==0) t[i][j][k]=0;
                else if(A[i-1]==B[j-1] && A[i-1]==C[k-1]) 
                        t[i][j][k]=t[i-1][j-1][k-1]+1;
                else 
                     t[i][j][k]=max(t[i-1][j][k],max(t[i][j-1][k],t[i][j][k-1]));
            }
        }
    }
    return t[m][n][s];
}