class Solution {
    vector<int> array;
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        array.resize(n); //output array
        
        //creating adjacency list
        vector<vector<int>> a(n);
        for(auto x:edges){
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }
        dfs(-1,0,a,labels);
        return array;
    }

    vector<int> dfs(int prev,int curr,vector<vector<int>>& a,string& labels)
    {
        vector<int> ans(26); 
        for(auto x:a[curr])
        {
            if(prev!=x)
            {
            // array return by the children node
                vector<int> res = dfs(curr,x,a,labels); 
            // combining the frequencies of left and right subtrees into one array
                for(int i=0;i<26;i++) 
                    ans[i]+=res[i];
            }
        }
        // incrementing the freq of curr node label and storing in output array
        array[curr] = ++ans[labels[curr]-'a'];
        return ans;
    }
};