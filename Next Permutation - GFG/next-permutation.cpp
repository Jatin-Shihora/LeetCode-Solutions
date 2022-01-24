// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void reverse(vector<int> &a,int l,int r){
        while(l<r)
        swap(a[l++],a[r--]);               //swapping the first and last elements accordingly
    }
    vector<int> nextPermutation(int n, vector<int> a){
        // code here
        int i=a.size()-2,j;
        while((a[i]>=a[i+1])&&(i>=0))i--;
        if(i<0){
            reverse(a,0,n-1);
            return a;
        }
        for(j=n-1;j>i;j--)
        if(a[j]>a[i])break;//You can find this by using binary search but overall in worst case 
                        //the program will run in O(n)
        swap(a[i],a[j]);
        reverse(a,i+1,n-1);
        return a;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends