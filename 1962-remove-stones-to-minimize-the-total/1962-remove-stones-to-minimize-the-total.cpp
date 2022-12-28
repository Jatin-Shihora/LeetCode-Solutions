class Solution {
public:
//Everytime find out the max pile do the operation on it
//Thus Heap will be the best[max heap]
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(),piles.end());
        int ans = 0;
        for(int i=0;i<k;i++){
            //top element will always be largest
            int tp = pq.top();
            pq.pop();
            tp -= (tp/2);
            pq.push(tp);
        }
        while(!pq.empty()){
            ans += pq.top();//adding remaining stones, after k operations 
            pq.pop();
        }
        return ans; 
    }
};