class Solution {
public:
    int minTimeToType(string word) {
        int sum = 0;
        sum += word.length();            //  adding the length, as we have to type every character once
		
        sum += min( (word[0] - 'a') , (26 - (word[0] - 'a')) );            // min(clockwise, anticlockwise)
        
        for(int i=1; i<word.length(); i++){
            sum += min( abs(word[i] - word[i-1]) , (26 - abs(word[i-1]-word[i])) );           // min(clockwise, anticlockwise)
        }
        return sum;
    }
};