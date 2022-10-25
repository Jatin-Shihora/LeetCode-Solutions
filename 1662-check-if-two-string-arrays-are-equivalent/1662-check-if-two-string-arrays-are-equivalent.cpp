class Solution {
    
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0; // word pointers
        int m = 0, n = 0; // char pointers
        
        while (i < word1.size() and j < word2.size()) {            
            if (word1[i][m++] != word2[j][n++])
                return false;
            
            if (m >= word1[i].size())
                i++, m = 0;
            
            if (n >= word2[j].size())
                j++, n = 0;
        }
        
        return i == word1.size() and j == word2.size();
    }
};

/*
The last row is important! It prevents scenarios like below:
array1=["app", "lemon", "key"]
array2=["apple", "monkey", "winter"]
array1 has been fully compared, but it's still different from array2.
*/