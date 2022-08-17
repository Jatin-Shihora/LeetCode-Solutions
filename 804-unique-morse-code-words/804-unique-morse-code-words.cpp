class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morseCode ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> morseWords;
        
        for(auto &word: words)
        {
            string morseWord = "";
            for(auto &letter: word)
            {
                morseWord += morseCode[((int)letter)-97]; 
            }
            morseWords.insert(morseWord);
        }   

        return morseWords.size();
    }
};