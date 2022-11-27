//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B){
	    // your code here
	    //Traverse the strings from the end
	    reverse(A.begin(), A.end());
	    reverse(B.begin(),B.end());
	    
	    string ans ="";
	    int carry=0;
	    for(int i=0;i<max(A.size(),B.size());i++){
	        int a = 0, b=0;
	        if(i<A.size()) a=A[i]-'0';//remove zeroes from A if there any at ith position
	        if(i<B.size()) b=B[i]-'0';//remove zeroes from B if there any at ith position
	        int sum = a+b+carry;//Add all 

	        carry = sum/2;//see carry by doing division operator
	        sum %=2;//find sum by modulus operator
	        ans.push_back(sum+'0');//append 0 to sum
 	    }
 	    if(carry) ans.push_back('1');//if  a carry exist append 1 to ans
 	    while(ans.back()=='0') ans.pop_back();//
 	    reverse(ans.begin(),ans.end());//Now again reverse to get it in the correct order
 	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends