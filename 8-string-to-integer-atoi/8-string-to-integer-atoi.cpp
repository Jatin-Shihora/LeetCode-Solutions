class Solution {
public:
    int myAtoi(string A) {
        int n = A.size();
        int i=0;
		
		//removing any whitespaces in the beginning of the string
        while(i<n)
        {
            if(A[i] == ' ') i++;
            else break;
        }
		
        bool neg = false;
		
		//if there is a minus sign, neg = true indicating that later we need to multiply our ans by -1
        if(A[i] == '-') neg=true,i++;
        else if(A[i] == '+') i++;
        
		//this string will be used to extract out the part which need to be converted and 
		//rest of the string will be ignored
        string str = "";
        
		//if there are any leading 0's , then they also need to be ignored
        while(i<n)
        {
            if(A[i] != '0') break;
            else i++;
        }
        
        while(i<n)
        {
			// if the current character lies anywhere between 0 and 9 (inclusive), 
			//we add it to str
            if(A[i] <= '9' and A[i] >= '0')
            {
                str += A[i];
            }
			
			//in case of any other character, we simply ignore the rest of the string from there
            else break;
            i++;
        }

		//variable to store the final number
        long long res = 0;
		
		//variable to take care of the case if there is an overflow
        bool ovf = false;
        int p = 0;
		
        for(int i=str.size()-1;i>=0;i--)
        {
			//converting the values to int and then multiplying by
			//corrent power of 10 so as to get that value at correct position
            int val = str[i] - '0';
            res += val * pow(10,p);
            p++;
			
			//in case the overflow occurs, we immediately stop and make ovf = true
            if((p>10) or res > INT_MAX) {ovf=true; break;}
        }
		
		//in case there is overflow, we return the values accordingly
        if(ovf)
        {
            if(neg) return INT_MIN;
            else return INT_MAX;
        }
		
		//else if neg = true return -res else res
        if(neg) return -res;
        else return res;
    }
};    