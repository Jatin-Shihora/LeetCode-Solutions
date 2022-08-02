STRIVER
​
​
​
https://leetcode.com/problems/unique-paths/discuss/1171708/100-faster-time-and-98-faster-space-oror-Easy-Understanding -DP table and solution
​
​
A unique Solution but i was not able to understand it
​
COMBINATION SOLUTION:-
​
```
class Solution {
public:
int uniquePaths(int m, int n) {
int N = n+m-2;
int r = m-1;
double res = 1;
for(int i=1; i<=r; i++){
res = res * ( N - r + i) / i;
}
return (int)res;
}