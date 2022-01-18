# Maximum sum of Non-adjacent nodes
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary tree with a value associated with each node, we need to choose a subset of these nodes such that sum of chosen nodes is maximum under a constraint that no two chosen node in subset should be directly connected that is, if we have taken a node in our sum then we can’t take its any children or parents in consideration and vice versa.</span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<img alt="" src="http://cdncontribute.geeksforgeeks.org/wp-content/uploads/nodeSubsetWithMaxSum.png" style="height:263px; width:600px" class="img-responsive"></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>     11
&nbsp;   /  \
&nbsp;  1    2
<strong>Output: </strong>11<strong>
Explanation: </strong>The maximum sum is sum of
node&nbsp;11.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
&nbsp;       </strong>1
<strong>      /   \
&nbsp;    </strong>2     3
&nbsp;   /     /  \
&nbsp;  4     5    6
<strong>Output: </strong>16<strong>
Explanation: </strong>The maximum sum is sum of
nodes 1 4 5 6<strong> </strong>, i.e 16. These nodes are
non adjacent.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. You just&nbsp;have to complete&nbsp;function&nbsp;<strong>getMaxSum() </strong>which accepts root node of the tree as parameter and returns the maximum sum as described.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(Number of nodes in the tree).<br>
<strong>Expected Auxiliary Space: </strong>O(Height of the Tree).</span></p>

<div><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of nodes in the tree ≤ 10000</span></div>

<div><span style="font-size:18px">1 ≤ Value of each node ≤ 100000</span></div>
 <p></p>
            </div>