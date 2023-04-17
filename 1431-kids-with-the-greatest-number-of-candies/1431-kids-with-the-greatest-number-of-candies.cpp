class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> out;
        int max = *max_element(candies.begin(), candies.end());
        
        for(int i=0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= max)
                out.push_back(true);
            else
                out.push_back(false);
        }
        
        return out;
    }
};