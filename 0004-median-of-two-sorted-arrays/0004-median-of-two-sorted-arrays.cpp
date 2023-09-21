class Solution {
public:
    //T and S : O(log(min(m,n)) & O(1)
    
    int kthElement(vector<int> &arr1,vector<int> &arr2,int n,int m,int k){
        int low = max(0,k-m) , high = min(n,k);
        int indx,indx2;
        while(low<=high){
            int mid = low+(high-low)/2;
            int x = mid;
            int y = k-x;
            
            int A = ( x==0 ) ? INT_MIN : arr1[x-1];
            int B = ( y==0 ) ? INT_MIN : arr2[y-1];
  
            int C = ( x+1 <= n) ? arr1[x] : INT_MAX ;
            int D = ( y+1 <= m) ? arr2[y] : INT_MAX ;
            
            if((A<=D) && (B<=C)){
                indx = mid;
                indx2 = k-mid;
                break;
            }
            else if (A>D) high=mid-1;
            else low=mid+1;
        }
        
        int ans;
        if(indx<=n){
            int a = (indx>0)?arr1[indx-1]:INT_MIN;
            int b = (indx2>0)?arr2[indx2-1]:INT_MIN;
            return max(a,b);
        }
        return arr2[indx2-1];
    }
    
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n= arr1.size();
        int m= arr2.size();
        
        if((n+m)%2) return kthElement(arr1,arr2,n,m,(n+m+1)/2);
        
        int a = kthElement(arr1,arr2,n,m,(n+m)/2);
        int b = kthElement(arr1,arr2,n,m,(n+m)/2 + 1);
        
        return (a+b)/2.0;
    }
};