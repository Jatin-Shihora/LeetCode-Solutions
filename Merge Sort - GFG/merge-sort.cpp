// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int x=m-l+1;
         int y=r-m;
         int L[x+1];
         int R[y+1];
         for(int i=0;i<x;i++){
             L[i]=arr[i+l];
         }
         for(int i=0;i<y;i++){
             R[i]=arr[m+i+1];
         }
         int i=0;
         int j=0;
         int k=l;
         while(i<x && j<y){
             if(L[i]<=R[j]){
                 arr[k]=L[i];
                 i++;
             }else{
                 arr[k]=R[j];
                 j++;
             }
             k++;
         }
         while(i<x){
             arr[k]=L[i];
             i++;
             k++;
         }
         while(j<y){
             arr[k]=R[j];
             j++;
             k++;
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l==r){
            return;
        }
        int middle=l + (r - l)/2;
        mergeSort(arr,l,middle);
        mergeSort(arr,middle+1,r);
        merge(arr, l,  middle, r);
            
        
        
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends