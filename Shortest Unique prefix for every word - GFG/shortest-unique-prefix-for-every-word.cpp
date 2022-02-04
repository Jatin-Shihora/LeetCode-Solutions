// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    struct Node
    {
        int cnt{0};
        Node * children[26] = {0};  
    };
    void insert(Node * root, string& word)
    {
        for(auto ch:word)
        {
            int c = ch-'a';
            if(!root->children[c])
            {
                root->children[c] = new Node;
            }
            root->cnt++;
            root = root->children[c];
        }
    }
    string get_prefix(Node * root, string& word)
    {
        string pref;
        for(auto ch: word)
        {
            int c = ch-'a';
            if(root->cnt==1)
                break;
            pref += ch;
            root = root->children[c];
        }
        return pref;
    }
    vector<string> findPrefixes(string arr[], int n)
    {
        //code here
        Node * trie = new Node;
        for(int i=0; i<n; i++)
            insert(trie, arr[i]);
        
        vector<string> res;
        for(int i=0;i<n; i++)
            res.push_back(get_prefix(trie, arr[i]));
            
        return res;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
  // } Driver Code Ends