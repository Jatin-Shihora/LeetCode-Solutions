// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


 // } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space 
 
 Algo :- Taking transpose and then column by column reverse matrix
 */
 
void rotate(vector<vector<int> >& arr)
{
    //taking transpose of a matrix
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    //Now reverse it by column by column
    for(int i=0;i<n;i++){
        int li = 0;
        int ri=n-1;
        
        while(li<ri){
            int temp =  arr[li][i];
            arr[li][i] = arr[ri][i];
            arr[ri][i] = temp;
            
            li++;
            ri--;
        }
        
    }
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

  // } Driver Code Ends