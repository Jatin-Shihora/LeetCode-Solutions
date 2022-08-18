class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int>mp;
        multiset<int, greater<int>> s;
		for(auto num : arr) mp[num]++;                  // find frequency of elements
        for(auto [num, freq] : mp) s.insert(freq);      // sort frequency in descending order
        for(int deleted{}, ans{}; auto freq : s) {      // keep deleting till array size is reduced to half
            deleted += freq, ans++;
            if(deleted >= size(arr) / 2) return ans;    // atleast half array is deleted
        }
        return -1;  // won't ever be reached
    }
};