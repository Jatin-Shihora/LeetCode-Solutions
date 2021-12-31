// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> st;
        int n = S.length();
        for(int i =0;i<n;i++){
            if(S[i]==' ') continue;
            else if(isdigit(S[i])) st.push(S[i]-'0');
            else {
                int A = st.top();
                st.pop();
                int B= st.top();
                st.pop();
                
                switch(S[i]){
                    case '+': st.push(B+A);
                    break;
                    case '-': st.push(B-A);
                    break;
                    case '*': st.push(B*A);
                    break;
                    case '/': st.push(B/A);
                    break;
                }
            }
        }
        return st.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends