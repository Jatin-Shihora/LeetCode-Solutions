class Solution {
public: 
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> count;
        //calculate all empty spaces for each bag 
        int i;
        for(i=0;i<rocks.size();++i)
            count.push_back(capacity[i]-rocks[i]);
        //sort them from small to big, including 0 empty spaces
        sort(count.begin(),count.end());
        //greedily fill the bags, from small empty space to bigger one
        for(i=0;i<rocks.size() && additionalRocks>=count[i];++i)
            additionalRocks -= count[i];
        //return the number of full bags 
        return i;
    }
};