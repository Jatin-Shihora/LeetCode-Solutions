class Solution {
public:
    int partitionString(string s) {
        int i=0, result =0;
        unordered_map<int,int> mp;
        while(i<s.size()){
            if(mp[s[i]]==0){
                mp[s[i]]++;
                i++;
            }else{
                result++;
                mp.clear();
            }
        }
        return ++result;
    }
};