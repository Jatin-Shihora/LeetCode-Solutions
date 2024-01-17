class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_set<int> s;
        //Inserting & counting all the elements inside the map 
        for(auto i=0; i<arr.size(); ++i)
            ++freq[arr[i]];
        //Insert all occurences into a hash set
        for (auto& p : freq)
            s.insert(p.second);
        //If, after the insert, the sizes of hash map and set are equal, then all occurences are unique.
        return freq.size() == s.size();
    }
};