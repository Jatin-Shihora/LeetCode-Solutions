// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    string buildString(char ch, int n){
        string temp = "";
        for(int i=0;i<n;i++) temp += ch;
        return temp;
    }
  public:
    string arrangeString(string str)
    {
        //code here.
        int arr[26] = {0};
        int sum =0 ;
        for(char ch:str){
            if(ch>='0' && ch<= '9') sum += ch-'0';
            else arr[ch-'A']++ ;
        }
        string res = "";
        for(int i=0;i<26;i++)
            res += buildString('A'+i,arr[i]);
        res += to_string(sum);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends