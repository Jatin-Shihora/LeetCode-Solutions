class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>stk ;
        for(string x:ops){
            int n = stk.size() ;
            if(isdigit(x[x.length()-1])){
                stk.push_back(stoi(x));
            }else if(x=="C")stk.pop_back() ;
            else if(x=="+"){
                stk.push_back(stk[n-1]+stk[n-2]);
            }else{
                stk.push_back(stk[n-1]*2);
            }
        }
        return accumulate(stk.begin(),stk.end(),0);
    }
};