class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> seqDigitsInRange;
        
        //create all numbers wuth sequential digits and compare if they fit the gibven range 
        for(int i=1;i<9;i++){
            int number=i;
            for(int j=i+1;j<10;j++){
                number = number * 10 + j;
                if(number >=low && number <=high) 
                    seqDigitsInRange.push_back(number);
            }
        }
        sort(seqDigitsInRange.begin(), seqDigitsInRange.end()); //Result is requires to be sorted
        return seqDigitsInRange;
        
    }
};