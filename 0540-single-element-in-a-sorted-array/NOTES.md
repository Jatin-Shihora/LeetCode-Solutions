**Intuition: **
​
Since in the question it's given that the vector is sorted .One approach that comes to mind is to use a pointer and traverse the whole vector .while, traversing the vector keep track of present location adn position next to it .If they both are same move on else we got our output . The problem here is the TC get's exceeded that is we get a O(n) solution .
​
So instead of initial approach  we will be using binary seach because of TC and sorted array .
​
**Algo:**
As we know only one element has freaquency of 1 rest all have their frequnecy of occurence as 2 . That means the size of the whole vector will be a odd number but according to indexes it will be even since it start from 0 .
So if we Notice that once we hit the mid and remove its duplicate(if it doesnt have any that would be the answer)-> the answer will lie in the subarray
constaining odd length (cuz everything will be paired up except for 1 thus odd length)
.Thus the odd part contains our answer because it got odd for one reason that is the element with frequency of occurence as 1 .
​
**Code : **
```
class Solution {
public:
int singleNonDuplicate(vector<int>& nums) {
int left = 0, right = nums.size()-1, mid;