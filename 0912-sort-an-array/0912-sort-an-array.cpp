class Solution {
public:
void merge(vector<int> &a , int l , int mid , int h)     // make sure you passed be reference else changes wont reflect 
    {
        vector<int> x(a.begin()+l, a.begin()+mid+1);         // making temp array for 1st segment 
        vector<int> y(a.begin()+mid+1, a.begin()+h+1);  // making temp array for  2nd segment
        
        int n = x.size();
        int m = y.size();
        int i,j,k;  i=j=0;  k=l;
        
        while(i<n and j<m)                                  // standard merging algo as explained in video
            a[k++] = (x[i]<y[j]) ? x[i++] : y[j++];
        while(i<n)
            a[k++] = x[i++];
        while(j<m)
            a[k++] = y[j++];         
	}        
    void mergeSort(vector<int> &a , int l , int h)     // this function recursively calls itself until segment is greater than 1 length
    {
        if(l<h)
        {
            int mid = l+(h-l)/2;
            mergeSort(a,l,mid);
            mergeSort(a,mid+1,h);
            merge(a,l,mid,h);
        }
    }    
    vector<int> sortArray(vector<int>& nums) {        
        int n = nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};