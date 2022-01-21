class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0, currGas=0, ans=0; //totalGas -> stores the gas remaining after traverlling around the circuit, 
		//currGas -> stores the gasRem after filling up at a stn & trvaelling to next station, if that's not possible, stores 0
		//ans -> stores the index from which we can start and finish a round circuit
        
        for(int i=0; i<gas.size(); i++){
            totalGas += gas[i]-cost[i];
            currGas += gas[i]-cost[i];
            
            if(currGas < 0) currGas=0, ans=i+1;
        }
        return (totalGas < 0)? -1 : ans;
    }
};