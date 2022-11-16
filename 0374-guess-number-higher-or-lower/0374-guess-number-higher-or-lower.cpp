/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        long int high =n;
        while(high >= low){
            int mid = (low+high)/2;
            if(guess(mid)==-1) high = mid-1;
            else if(guess(mid)==1) low = mid+1;
            else return mid; 
        }
        return 0;
    }
};