class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        int carry=0;
        string result="";
        while(i>=0|| j>=0){
            int x = (i>=0)?a[i--]-'0':0; 
            int y = (j>=0)?b[j--]-'0':0;
            int sum = x+y+carry;
            result=to_string(sum%2)+result;
            carry=sum/2;
        }
        if(carry>0)
               result=to_string(1)+result;
        return result;
        
    }
};