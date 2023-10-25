/*
The whole structure can be viewed a binary tree, when a node is 0, their two children nodes are 0 and 1, similarly, when a node is 1, two children nodes are 1 and 0. We can know whether the position of K is a left node or a right node by dividing 2. 

If K is even, current node is right child, and its parent is the (K/2)th node in previous row; else if K is odd, current node is left child and its parent is the ((K+1)/2)th node in previous row.

The value of current node depends on its parent node, without knowing its parent node value, we still cannot determine current node value. 

That's why we need recursion, we keep going previous row to find the parent node until reach the first row. Then all the parent node value will be determined after the recursion function returns.
*/

class Solution {
public:
    int kthGrammar(int N, int K) {
	if (N == 1) return 0;
	if (K % 2 == 0) return (kthGrammar(N - 1, K / 2) == 0) ? 1 : 0;
	else return (kthGrammar(N - 1, (K + 1) / 2) == 0) ? 0 : 1;
    }
};