class Solution {
public:
     int calculate(string s) {
        int sum = 0;
        long long last = 0, last_result = 1;  
        char last_operator = '+'; //we need to remember the last operator
        //base case
        if(s.size() < 1) return sum; 
        //The sign flag is for the case if in input user gives a negative value. This question has no such conditions but yet i have done, because this may be a genereal case for implementaion in real life .
        int i = 0, sign = 1; 

        //Traverse the given string s
        while(i < s.size()){
            //Condition 1
            if(s[i] == ' '){++i; continue;}

            //Condition 2
            if(s[i] == '+' || s[i] == '-'){
                sum += last_result * sign;
                sign = s[i++] == '+' ? 1 : -1; 
                last_result = 1;
                last_operator = '+'; 
            }
            else if(s[i] == '/' || s[i] == '*'){
                last_operator = s[i];
                ++i; 
            }

            //Condition 3
            if(isdigit(s[i])){
                last = 0; 
                while(i < s.size() && isdigit(s[i])){
                    last =  last * 10 + s[i] - '0'; 
                    i++;
                }
                if(last_operator == '*') last_result *= last;
                else if(last_operator == '/') last_result /= last;

                else  last_result = last; 
            }
        }
        sum += last_result * sign;
        return sum; 
    }
};