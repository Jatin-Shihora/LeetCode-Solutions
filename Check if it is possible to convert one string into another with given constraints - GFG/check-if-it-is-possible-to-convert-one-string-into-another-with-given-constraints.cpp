//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
/*
Clearly, no character can cross each other, this means that the string will only replicate
in the case when, the alphabet are present in both string in same order(with numbers).

Increase the index only when we found "#" otherwise wait for other one to match the alphabet.

**/
class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        if(M!=N) return 0;
        string S1="",S2="";
        //put S into s1 without #
        for(int i=0;i<S.size();i++)
            if(S[i]!='#') S1+=S[i];
        //put T into s2 without #
        for(int i=0;i<T.size();i++)
            if(T[i]!='#') S2+=T[i];
        //if both have same order of alphabets in S and T then without '#' they should become equals in s1 and s2 
        //S=#A#B#B# , T=A###B#B => without # => s1=ABB , s2=ABB
        return (int)(S1==S2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends