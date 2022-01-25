# Capacity To Ship Packages Within D Days
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>arr[]</strong> of <strong>N</strong> weights. Find the least weight capacity of a boat to ship all weights within <strong>D</strong> days.<br>
The&nbsp;<code>i<sup>th</sup></code>&nbsp;weight&nbsp;has a weight of&nbsp;<code>arr[i]</code>. Each day, we load the boat with weights given by arr[i].We may not load more weight than the maximum weight capacity of the ship.</span><br>
<br>
<span style="font-size:18px"><strong>Note: </strong>You have to load weights on the boat in the given order.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
arr[] = {1, 2, 1}
D = 2
<strong>Output:
</strong>3
<strong>Explanation:</strong>
We can ship the weights in 2 days
in the following way:-
Day 1- 1,2
Day 2- 1</span>
</pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
arr[] = {9, 8, 10}
D = 3
<strong>Output:</strong>
10</span>
<span style="font-size:18px"><strong>Explanation:</strong>
We can ship the weights in 3 days
in the following way:-
Day 1- 9
Day 2- 8
Day 3- 10</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>leastWeightCapacity()</strong>&nbsp;which takes 2 integers N, and D, and an array arr of size N as input and returns the least weight capacity of the boat required.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*log(Sum of weights - max(list of weights))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;D ≤ N ≤ 10<sup>5</sup><br>
1 ≤ arr[i] ≤ 500</span></p>
 <p></p>
            </div>