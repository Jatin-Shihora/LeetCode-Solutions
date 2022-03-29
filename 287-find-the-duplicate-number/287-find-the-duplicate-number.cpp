class Solution {
public: 
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int duplicate = 0; 
        
        //Inserting all the elements inside the map 
        for(auto i=0;i<nums.size();++i)
            ++mp[nums[i]];
        
        //traversing the map and checking whether the value part is more than 1 or not
        for(auto i:mp){
            if(i.second>1){
                duplicate = i.first;
                break;
            }
        } 
        return duplicate;
    }   
};      