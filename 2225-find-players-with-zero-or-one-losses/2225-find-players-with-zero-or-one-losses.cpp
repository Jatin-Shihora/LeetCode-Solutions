class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        //creating two vectors not_lost and one_lost
        vector<int> not_lost,one_lost;
        //For tracking wins and loses
        map<int,int> mpp;
        //iterate matches and update the matches result in it
        for(int i=0;i<matches.size();i++){
            mpp[matches[i][0]] += 0;
            mpp[matches[i][1]] += 1;
        }
        //traverse the whole map, if the player lost 1 or didnt lose any match we update it in the final vector.
        for(auto it: mpp){
            if(it.second==0) not_lost.push_back(it.first);
            else if(it.second==1) one_lost.push_back(it.first);
        }
        //put it to ans in this format :) [[1,2,10],[4,5,7,8]]
        ans.push_back(not_lost);
        ans.push_back(one_lost);
        return ans;
    }
};