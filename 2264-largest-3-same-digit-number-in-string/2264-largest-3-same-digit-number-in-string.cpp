class Solution {
public:
    string largestGoodInteger(string num) {
        char maxDigit = '\0';
        for(int index = 0; index <= num.size()-3; index++){
            if(num[index] == num[index+1] && num[index] == num[index+2]){
                maxDigit = max(maxDigit, num[index]);
            }
        }
        return maxDigit == '\0' ? "" : string(3,maxDigit);
    }
};