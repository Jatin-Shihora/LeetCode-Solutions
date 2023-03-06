class Solution { 
    //as we move in array we check how many numbers are present between 1 and K(here 5) , usually if there are no numbers 5 will be the missing number , but if there are some numbers they will push the k because k is the missing number.
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i=0;i<arr.size();i++)
            if(arr[i]<=k) k++;
        return k;
    }
};