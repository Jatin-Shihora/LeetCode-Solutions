class Solution {
public:
    bool closeStrings(string word1, string word2) {
        //container of frequency arrays since there are 26 smaller alphabets(see constraints) so size ==26 and initializr all to 0
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        
        if(word1 == word2) return true;
        if(word1.size() != word2.size()) return false;

        //Create frequency array
        for(int i=0;i<word1.size();i++) 
            v1[word1[i]-'a']++;
        for(int i=0;i<word2.size();i++) 
            v2[word2[i]-'a']++;

        //if dissimilar elements are present then return false
        for(int i=0;i<v1.size();i++)
            if(!((v1[i] == 0 && v2[i] == 0) || (v1[i]!=0 && v2[i] !=0))) return false;
        
        // check for number of elemnets with same frequency (after sorting, as we can transform every occurence), if frequency different then return false
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        //iterate and compare the sorted v1 and v2
        for(int i=0; i<v1.size(); i++)
            if(v1[i] != v2[i])
                return false;
        return true;
    }
};