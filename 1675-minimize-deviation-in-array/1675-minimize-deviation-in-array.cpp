/*
Intuition: we can double all odd numbers first, so we can get forget of the second operation. Now, we only need to decrease the largest number - while it's even, which results a very simple solution.

1. Traverse the vector and double all the odd vector elements. This nullifies the requirement for the 2nd operation.
2. Now, decrease the largest vector element while it’s even.
3. To store the vector elements in sorted manner, insert all vector elements into a Set.
4. Greedily reduce the maximum element present in the Set
5. If the maximum element present in the Set is odd, break the loop.
6. Print the minimum deviation obtained.
*/
class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> s;
        
        //storing all elements in sorted order
        //Insert even directly and odd with one time multiplicaton 
        //and it will become even
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) s.insert(nums[i]);
            else s.insert(nums[i]*2); //odd numbers are transfered
        }
        // begin():-Returns an iterator to the first element in the set. Tc=O(log(n))
        // rbegin():-Returns a reverse iterator pointing to the last element in the container. Tc=O(log(n))
        //maximum - minimum
        int diff = *s.rbegin() - *s.begin();
        
        //run the loop untill difference is minimized
        while(*s.rbegin()%2 == 0){
            //maximum element of the set
            int x=*s.rbegin();
            s.erase(x);
            //remove begin element and inserted half of it for minimizing
            s.insert(x/2);
            
            diff = min(diff,*s.rbegin() - *s.begin());
        }
        return diff;
    }
};