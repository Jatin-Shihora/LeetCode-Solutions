# Find Total Time Taken
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr</strong> of size <strong>n</strong>, containing the values in between <strong>1</strong> to <strong>n</strong>, you are asked to determine the total time taken in order to pick all the array elements from left to right but there is a condition, you are also given an another array <strong>time</strong> again of size <strong>n</strong>, <strong>time[element] ( 1 &lt;= element &lt;= n )</strong> represents the time after which you can again pick <strong>element</strong>, For clearity, while moving from left to right if you have once picked <strong>element</strong>, then you can again pick <strong>element</strong>&nbsp;only after <strong>time[element]</strong> sec.</span></p>

<p><span style="font-size:18px"><strong>NOTE:</strong><br>
1. It takes 1 sec to move from index i to i+1 (1 &lt;= i &lt; n).<br>
2. There is no extra time needed to pick an element.<br>
3. 1-based indexing.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 4
arr = {1, 2, 3, 3}
time = {1, 2, 3, 4}
<strong>Output:</strong>
5
<strong>Explanation:</strong>
-&gt; You start from index 1, and pick arr[1] 
&nbsp;  i.e. 1 in no time.
-&gt; In 1 sec you move from index 1 to 2, and pick arr[2]
&nbsp;  i.e. 2, total time = 1.
-&gt; In next 1 sec you move from index 2 to 3, and pick 
&nbsp;  arr[3] i.e. 3, total time = 2.
-&gt; In next 1 sec you move from index 3 to 4, and arr[4] 
&nbsp;  is 3, which you have taken already at time 2, hence 
&nbsp;  you need to wait for <strong>time[arr[i]]</strong> sec to again pick 
&nbsp;  arr[i], <strong>time[arr[i]] = time[3] = 3</strong>, hence in 1 sec you 
&nbsp;  moved from index 3 to 4, and waited for next 2 sec,
   and finally picked arr[4], total time = 5.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 4
arr = {1, 2, 3, 4}
time = {1, 2, 3, 4}
<strong>Output:</strong>
3
<strong>Explanation:</strong>
All the array elements are different hence, you do not 
have to wait for any arr[i] before picking it, hence 
the total time will be 3, which is the time required 
to traverse the array.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function totalTime() which takes three variables n, arr, time, as explained in the problem statement, and returns the total time taken to pick all the elements.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n)<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10^5<br>
1 &lt;= arr[i] &lt;= n<br>
1 &lt;= time[i] &lt;= 10^5</span></p>
</div>