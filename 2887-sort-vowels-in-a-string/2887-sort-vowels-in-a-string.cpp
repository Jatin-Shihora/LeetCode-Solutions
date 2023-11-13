class Solution {
public:
    // Returns true if the character is a vowel.
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'o'|| c == 'u'|| c == 'i' 
            || c == 'A' || c == 'E' || c == 'O'|| c == 'U'|| c == 'I';
    }

    string sortVowels(string s) {
        string temp;

        // Store the vowels in the temporary string.
        for (char c : s) {
            if (isVowel(c)) {
                temp += c;
            }
        }
        
        // Sort the temporary string characters in ascending order.
        sort(temp.begin(), temp.end());

        int j = 0;
        string ans;
        for (int i = 0; i < s.size(); i++) {
            // If the character is a vowel, replace it with the character in the string temp.
            if (isVowel(s[i])) {
                ans += temp[j];
                j++;
            } else {
                ans += s[i];
            }
        }
        
        return ans;
    }
};