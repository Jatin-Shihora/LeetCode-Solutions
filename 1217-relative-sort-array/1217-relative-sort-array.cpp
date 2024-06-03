class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        vector<int> count(1001); 
        // Count occurrences of each element
        for(int element : arr1) {
            ++count[element];
        }
        // Add elements as per relative order
        for(int element : arr2) {
            while(count[element] > 0) {
                result.push_back(element);
                count[element]--;
            }
        }
        // Add remaining elements in ascending order
        for(int num = 0; num < 1001; num++){
            while(count[num] > 0) {
                result.push_back(num);
                count[num]--;
            }
        }
        return result;
    }
};