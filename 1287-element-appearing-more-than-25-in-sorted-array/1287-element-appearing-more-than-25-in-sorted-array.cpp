class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> counts;
        for(int num : arr){
            counts[num]++;
        }
        for(auto& [key,value] : counts){
            if(value> arr.size()/4) return key;
        }
        return -1;
    }
};