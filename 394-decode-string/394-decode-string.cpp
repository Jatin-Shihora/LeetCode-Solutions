class Solution {
public:
    //Function to help repeat the substring a number of times
    string repeat(string str,int times){
        string result="";
        for(int i=0;i<times;i++) result += str;
        return result;
    }
    string decodeString(string s) {
        int i=0;
        while(i<s.size()){
            if(s[i]!=']'){
                i++;
                continue;
            }
            //The string that needs to get repeated after the first parenthesis '['
            int j=i;
            while(s[j]!='[') j--;
            //The letters that we will be repeating
            string repeatLetters = s.substr(j+1,i-j-1);
            int k=j;
            j--;
            //checking the number before opening the parenthesis so we can get a count that how many times we need to repeat the strin
            while((j>0) && (isdigit(s[j])))
                j--;
            
            //Corner case : When we r at the start of the out string
            if(j!=0) j++;
            //Find the number of times the letter should be repeated
            int repeatTimes = stoi(s.substr(j,k-j));
            //replace the encoded part of string with decoded part
            s.replace(j,i-j+1,repeat(repeatLetters,repeatTimes));
            //Putting i in the right place of our string
            i=j+repeatLetters.size()*repeatTimes;
        }
        return s;
    }
};