# Number of Coins
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a value <strong>V</strong> and array <strong>coins[]</strong> of size <strong>M</strong>, the task is to make the change for <strong>V</strong> cents, given that you have an infinite supply of each of coins{coins<sub>1</sub>, coins<sub>2</sub>, ..., coins<sub>m</sub>} valued coins. Find the minimum number of coins to make the change. If not possible to make change then return -1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: V = 30, M = 3, coins[] = {25, 10, 5}
<strong>Output:</strong> 2</span>
<span style="font-size:18px"><strong>Explanation</strong>: Use one 25 cent coin
and one 5 cent coin</span></pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input</strong>: V = 11, M = 4,coins[] = {9, 6, 5, 1} 
<strong>Output:</strong> 2</span> 
<span style="font-size:18px"><strong>Explanation</strong>: Use one 6 cent coin
and one 5 cent coin</span></pre>

<div><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Complete the function <strong><code>minCoins</code>()&nbsp;</strong>which takes <strong>V, M</strong> and array <strong>coins </strong>as input parameters and returns the answer.<br>
<br>
<strong>Expected Time Complexity:</strong> O(V*M)<br>
<strong>Expected Auxiliary Space:</strong> O(V)<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ <strong>V*M</strong> ≤ 10<sup>6</sup><br>
All array elements are distinct</span></div>
 <p></p>
            </div>