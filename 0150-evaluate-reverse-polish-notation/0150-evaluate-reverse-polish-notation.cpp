class Solution {
public:
    long solve(vector<string>& t, int &i) {
        //If the current token is an operator, find the operands for it by recursing for the previous indices
        if(t[i] == "+" || t[i] == "-" || t[i] == "*" || t[i] == "/") {
            char Operator = t[i][0];
            long op1 = solve(t, --i), op2 = solve(t, --i);            
            if(Operator == '+') return op2 + op1;
            if(Operator == '-') return op2 - op1;
            if(Operator == '/') return op2 / op1;
            if(Operator == '*') return op2 * op1;
        }
        //Else if the current token is integer, just return it.
        return stoi(t[i]);
    }
    //Instead of an explicit stack we are using recursion
    int evalRPN(vector<string>& tokens) {
	//start from the end
    int n = size(tokens) - 1;
	return solve(tokens, n);
    }
};