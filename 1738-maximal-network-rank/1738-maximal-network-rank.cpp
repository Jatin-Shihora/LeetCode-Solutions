class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
         map<pair<int,int>, int>mp;
        vector<int>inD(n);
        for(auto it : roads){
            int x = max(it[0] , it[1]);
            int y = min(it[0] , it[1]);
            inD[x]++;
            inD[y]++;
            mp[{x,y}]++;
        }
        int ans = 0;
        for(int i=n-1 ; i>=0 ;i--){
            for(int j=i-1 ; j>=0 ; j--){
                int x = inD[i] + inD[j] - mp[ {i,j} ] ;
                ans = max(x,ans);
            }
        }
        return ans;


    }
};