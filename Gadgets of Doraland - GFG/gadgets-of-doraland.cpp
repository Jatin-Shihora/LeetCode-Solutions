// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
{
        // code here
        vector<int> ans;
        
        unordered_map<int,int> mp;
        
        for(int i = 0;i<array.size();i++){
            mp[array[i]]++;
        }
        
        vector<pair<int,int>> vec;
        for(auto it: mp){
            vec.push_back(it);
        }
        
        sort(vec.begin(),vec.end(),[](pair<int,int>&a , pair<int,int>&b){
            if(a.second==b.second)
                return a.first>b.first;
            
            return a.second>b.second;    
        });
        
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        
        
        return ans;
          
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends