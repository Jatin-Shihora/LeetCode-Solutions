# Gadgets of Doraland
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">In Doraland, people have unique Identity Numbers called <strong>D-id.</strong> Doraemon owns the most popular gadget shop in Doraland. Since his gadgets are in high demand and he has only <strong>K</strong> gadgets left he has decided to sell his gadgets to his most frequent customers only. <strong>N</strong> customers visit his shop and <strong>D-id</strong> of each customer is given in an array <strong>array[ ]</strong>.&nbsp;In case two or more people have visited his shop the same number of time he gives priority to the customer with higher <strong>D-id</strong>. Find the <strong>D-ids</strong> of people he sells his <strong>K</strong> gadgets to.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6
array[] = {1, 1, 1, 2, 2, 3}
K = 2
<strong>Output:</strong> 
1 2
<strong>Explanation: </strong>
Customers with D-id 1 and 2 are most 
frequent.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 8
array[] = {1, 1, 2, 2, 3, 3, 3, 4}
K = 2
<strong>Output:</strong> 
3 2
<strong>Explanation: </strong>People with D-id&nbsp;1 and 2 have 
visited shop 2 times&nbsp;Therefore, in this 
case, the answer includes the D-id&nbsp;2 as 2 &gt; 1.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>TopK() </strong>which takes <strong>array[ ]</strong> and integer <strong>K</strong>&nbsp;as input parameters and returns an array containing <strong>D-id</strong> of customers he has decided to sell his gadgets to.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;N ≤&nbsp;10<sup>5</sup><br>
1&nbsp;≤&nbsp;D-id ≤&nbsp;10<sup>4</sup></span></p>
 <p></p>
            </div>