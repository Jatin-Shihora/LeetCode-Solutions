mink = 3 || maxk = 5 || index at element 5 than
array : 1 2 3 4 5
on the left side of 5 :
subarrays ending with 5 Are :
5 : is not possible
4 5 : is not possible mink not present
3 4 5 : first subinterval possible whose end with 5
After this Interval All left side elements of 3 contain 1 subarray Like Below
2 3 4 5
1 2 3 4 5
for counting number of left side elements of interval : leftmost ( mink or maxk ) - start + 1
We want both minK and maxK in the subarray, so choose the index which is more towards left.
​
​