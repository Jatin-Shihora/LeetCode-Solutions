// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // find the first most element of the stack st and push it into cloned stack
    // find second most and then push it into cloned stack 
    // and so on
    // while u pop elts from st to find elements, use cloned stack to store popped elements
void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        int n = st.size();
        for(int i = 0; i < n; i++){
            while(st.size() != i + 1){
                int top = st.top();
                st.pop();
                cloned.push(top);
            }
            int front = st.top();
            while(cloned.size() != i){
                int top = cloned.top();
                cloned.pop();
                st.push(top);
            }
            cloned.push(front);
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        stack<int> st;
        vector<int> copy;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        
        reverse(copy.begin(), copy.end());
        
        Solution ob;
        stack<int> cloned;
        ob.clonestack(st,cloned);
        vector<int> check;
        while(cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        
        int flag = 0;
        if(check!=copy)
            flag = 1;
        
        cout<<1-flag<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends