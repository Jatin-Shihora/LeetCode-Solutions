class Solution {
public:
    int tribonacci(int n) {
        vector<int>temp={0,1,1};
        int var=0;
        for(int i=3;i<n+1;++i){
           var=temp[i-1]+temp[i-2]+temp[i-3];
           temp.push_back(var);
        }
        return temp[n];
    }
};