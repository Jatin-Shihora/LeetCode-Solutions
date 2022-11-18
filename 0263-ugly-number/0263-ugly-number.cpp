class Solution {
public:
    bool isUgly(int n) {
        //2 , 3, 5
        for(int i=2;i<6 && n;i++)
            while(n%i==0)
                n /= i;
        return n==1;
    }
};