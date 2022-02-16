class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){        //Important 
            if(a[mid] == 0){
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid] == 2 ){
                swap(a[mid],a[high]);
                high--;
            }
            else{
                mid++;
            }            
        }       
    }
};