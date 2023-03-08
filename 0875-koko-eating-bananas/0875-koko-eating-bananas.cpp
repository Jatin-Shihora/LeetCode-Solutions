class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = (left + right) / 2;
            if (canEatAll(piles, mid, h)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
    
private:
    bool canEatAll(vector<int>& piles, int speed, int h) {
        int time = 0;
        for (int pile : piles) {
            time += (pile - 1) / speed + 1;
            if (time > h) {
                return false;
            }
        }
        return true;
    }
};