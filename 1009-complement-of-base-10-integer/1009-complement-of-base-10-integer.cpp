class Solution {
public:
    int bitwiseComplement(int num) {
        //base case
        if(num==0) return 1;
        vector<int> temp; 
		// convert to binary representation
        while( num != 0 ){
            temp.push_back( num % 2 );
            num /= 2;
        } 
		// make complement
        for(int i=0; i<temp.size(); i++){
            if( temp[i] == 1 ) temp[i] = 0;
            else if( temp[i] == 0 ) temp[i] = 1;
        } int res = 0;
        for(int i=temp.size()-1; i>-1; i--) res = res * 2 + temp[i];
        return res;
    }
};