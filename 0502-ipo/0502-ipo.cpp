class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>> projects(n);
        for(int i=0;i<n;i++) projects[i]={profits[i],capital[i]}; 
        int i=0;
        sort(projects.begin(),projects.end(),[&](pair<int,int> a,pair<int,int> b){ 
            return a.second<b.second;
        });
        priority_queue<int> maxProfit;
        while(k--){
            while(i<n && w>=projects[i].second) maxProfit.push(projects[i++].first);

            if(!maxProfit.empty()) w+=maxProfit.top(),maxProfit.pop();
        }
        return w;
    }
};