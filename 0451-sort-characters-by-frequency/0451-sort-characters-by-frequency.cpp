class Solution {
public:
    string frequencySort(string s) {
        //count frequency of each character
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        
        vector<string> bucket(s.size()+1,"");
        string res;
        //put characters in the freq bucket
        for(auto& it:freq){
            int c = it.first, n = it.second ;
            bucket[n].append(n, c);
        }
        
        //form descending sorted string
        for(int i=s.size(); i>0; i--) {
            if(!bucket[i].empty())
                res.append(bucket[i]);
        }
        return res;
    }
};