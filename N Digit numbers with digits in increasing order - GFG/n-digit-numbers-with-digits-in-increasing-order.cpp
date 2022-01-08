// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
vector<int> v;
    
    void store(int last,int n,int num){
        if(n==0) v.push_back(num);
        
        for(int i=last+1;i<=9;i++){
            int a = num*10 + i;
            store(a%10,n-1,a);
        }
    }

    vector<int> increasingNumbers(int N)
    {
        if(N==1){
            store(-1,1,0);
        }
        else{
            store(0,N,0);
        }
        return v;
    }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends