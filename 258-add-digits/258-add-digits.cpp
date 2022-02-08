class Solution {
public:
    /*
    I have 2 loops: the external runs until num > 9, ie: I have 2 digits.
Inside the inner one, I take one digit at a time and add it to tmp, 
reducing num proportionally; once the inner loop is done, 
I assign num the new value.
    */
    int addDigits(int num) {
        int tmp;
        while(num>9){
            tmp = 0;
            while(num){
                tmp+=num%10;
                num/=10;
            }
            num = tmp;
        }
        return num;
    }
};