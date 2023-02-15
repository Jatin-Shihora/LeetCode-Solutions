/*
Continuing the example of 123 + 912, we start with [1, 2, 3+912]. Then we perform the addition 3+912, leaving 915. The 5 stays as the digit, while we 'carry' 910 into the next column which becomes 91.
    
We repeat this process with [1, 2+91, 5]. We have 93, where 3 stays and 90 is carried over as 9. Again, we have [1+9, 3, 5] which transforms into [1, 0, 3, 5].
*/
class Solution {
public:
 vector<int> addToArrayForm(vector<int> A, int K) {
 for(int i=A.size()-1;i>=0&&K>0;i--){
     A[i]+=K;
     K=A[i]/10;
     A[i]%=10;
 }
     while(K>0){
         A.insert(A.begin(),K%10);
         K/=10;
     }
     return A;
    }
};