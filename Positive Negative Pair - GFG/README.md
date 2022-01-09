# Positive Negative Pair
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of distinct integers, find all the pairs having both negative and positive values of a number in the array.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 8
arr[] = {1,3,6,-2,-1,-3,2,7}
<strong>Output: </strong>-1 1 -3 3 -2 2<strong>
Explanation: </strong>1, 3 and 2 are present 
pairwise postive and negative. 6 and 
7 have no pair.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3
arr[] = {3,2,1}
<strong>Output: </strong>0<strong>
Explanation: </strong>No such pair exists so the 
output is 0.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Complete the function <strong>findPairs()</strong> which takes the array A[] and the size of the array, n, as input parameters and returns a&nbsp;list&nbsp;of integers denoting the pairs. The pair that appears first in A[] should appear first in the returning list and within the pair the negative integer should appear before positive integer. Return an empty integer list if no such pair exists. </span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(n)<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n&nbsp;&lt;= 10<sup>6</sup><br>
-10<sup>6</sup> &lt;= arr[i] &lt;= 10<sup>6</sup></span></p>
 <p></p>
            </div>