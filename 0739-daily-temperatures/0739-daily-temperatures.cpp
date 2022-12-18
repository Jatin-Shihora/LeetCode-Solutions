class Solution {
public:
//Two pointer approach
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> warmer_temperature(temperatures.size());
        stack<int> st;//Monotonic stack
        for(int i=temperatures.size()-1;i>=0;i--){
            // Popping all indices with a lower or equal temperature than the current index
            while(!st.empty() && temperatures[i] >= temperatures[st.top()])
                st.pop();
            
            // If the stack still has elements, then the next warmer temperature exists!
            if(!st.empty())
                warmer_temperature[i] = st.top() - i;
            
            // Inserting current index in the stack: monotonicity is maintained!
            st.push(i);
        }
        return warmer_temperature;
    }
};