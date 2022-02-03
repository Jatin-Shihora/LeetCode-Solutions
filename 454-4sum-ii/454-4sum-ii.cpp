class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> abSum;
        for(auto a : A){
            for(auto b : B)
                ++abSum[a+b];
        }
        int count = 0;
        for(auto c: C){
            for(auto d:D){
                auto it = abSum.find(0-c-d);
                if(it!=abSum.end()){
                    count += it->second;
                }
            }
        }
        return count;
    }
};