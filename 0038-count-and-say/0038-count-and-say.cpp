class Solution {
public:
    string countAndSay(int n) {
         if (n == 1)
            return "1";
        if (n == 2)
            return "11";
    
        string result = countAndSay(n-1);
        
        string newresult = "";
        int count = 1;
        for(int i = 1; i < result.size(); ++i){
            
            if(result[i]!=result[i-1]){
                newresult.push_back('0'+count);
                newresult.push_back(result[i-1]);
                count = 1;
            }
            else
                count++;
    
            if(i == result.size()-1){
                newresult.push_back('0'+count);
                newresult.push_back(result[i]);
            }
        }
        return newresult;
    }
};