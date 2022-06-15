class Solution {
public:
    //comparator used for sorting the strings by thier length
    static bool compare(const string &s1, const string &s2){
        return s1.length() < s2.length();
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),compare); //soer by words length
        unordered_map<string,int> dp;
        int res =0;
        //loop all the words
        for(string w:words){
            //loop all the characters foreach word
            for(int i=0;i<w.length();i++){
                string pre = w.substr(0,i) + w.substr(i+1);//deleting the ith character  by not addding it
                dp[w] = max(dp[w],dp.find(pre)==dp.end()?1 : dp[pre]+1);//word chain counter
            }
            //finding the max chain words
            res = max(res,dp[w]);
        }
        return res;
    }
};