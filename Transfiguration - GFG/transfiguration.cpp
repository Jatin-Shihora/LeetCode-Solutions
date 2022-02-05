// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	if (A.size() != B.size()) return -1;
    	int j=B.length()-1;
    	int cnt=0;
    	for(int i=A.length()-1;i>=0;i--){
    	    if(A[i] == B[j])
    	    j--;
    	    else
    	    cnt++;
    	}
    	unordered_map<char,int> mp;
    	for(int i=0; i<A.length() ; i++)
        mp[A[i]]++;
        for(int i=0; i<B.length(); i++)
        {
            if((mp[B[i]]--)==0)
                return -1;
        }
        return cnt;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends