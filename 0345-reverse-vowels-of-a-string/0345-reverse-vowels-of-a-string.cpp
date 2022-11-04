class Solution {
public:
    string reverseVowels(string s) {
        int low = 0, high = s.length()-1;
        while(low<high){
            while(low<high && !isVowel(s[low])) low++;
            while(low<high && !isVowel(s[high])) high--;
            if(low<high) swap(s[low++],s[high--]);
        }
        return s;
    }
private: 
    bool isVowel(char c) const{
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
               c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }
};