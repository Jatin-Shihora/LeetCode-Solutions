1. Two pointer approach one for odd and next for even.The even pointer is 1step ahead from odd pointer .
2. Now create one more pointer to track the start of even indices i.e evenstart .
3. After that link even with its next even and odd with its next odd.
4. And now in the end put evenstart at the end of odd list
​
TC and SC : O(n) and O(1)