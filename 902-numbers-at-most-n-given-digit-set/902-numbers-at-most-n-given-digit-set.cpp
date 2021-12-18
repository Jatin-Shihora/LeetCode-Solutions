class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string upperLimit = to_string(n);
        int digit = upperLimit.size() , digitsize = digits.size() , result = 0;
        
        //Scenerio 1: where the number of digit is less than the upperlimit
        for(int i=1;i<digit;++i) result += pow(digitsize,i);
        
        //Scenerio 2:Where the number of digits are same as upperLimit
        for(int i=0;i<digit;++i){
            //if the number starts with same number
            bool startingSameNum = false;
            for(string &d :digits){
                if(d[0] < upperLimit[i]) result += pow(digitsize,digit -i - 1);
                else if (d[0]==upperLimit[i]) startingSameNum=true;
            }
            if(!startingSameNum) return result;
        }
        
        return result+1;
    }
};