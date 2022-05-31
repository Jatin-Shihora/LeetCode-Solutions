/*
Put in a set all substrings of size k.
The number of all binary codes of size k is 2^k, 
so if we get all codes - the set should be exactly the size of 2^k.
*/

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (k > s.size()) return false;
        
        unordered_set<string> my_set;
        
        for (int i = 0; i <= s.size()-k; i++)
            my_set.insert(s.substr(i, k));
        
        return my_set.size() == pow(2, k);
    }
};