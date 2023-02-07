class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;//index,value
        int i,j;
        for(i=0,j=0;j<fruits.size();++j){
            count[fruits[j]]++;//Append the values
            //sliding window possible if it has 2 or more elements 
            if(count.size()>2){
                if(--count[fruits[i]]==0) count.erase(fruits[i]);
                i++;
            }
        }
        return j-i;
    }
};