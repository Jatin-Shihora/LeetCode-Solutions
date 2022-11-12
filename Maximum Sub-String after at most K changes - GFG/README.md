# Maximum Sub-String after at most K changes
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">We have a string <strong>s</strong>&nbsp;of length <strong>n</strong>, which contains&nbsp;only <strong>UPPERCASE</strong> characters and we have a number <strong>k</strong> (always less than <strong>n</strong>). We can make at most <strong>k</strong> changes&nbsp;in our string.&nbsp;In one change, you can replace any <strong>s[i] </strong>(0&lt;= i &lt; n) with any uppercase character (from 'A' to 'Z').&nbsp;After <strong>k</strong> changes, find the maximum possible length of the&nbsp;sub-string&nbsp;which have all same characters.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>s = "ABAB", k = 2
<strong>Output: </strong>4
<strong>Explanation: </strong>Change 2 'B' into 'A'. 
Now s = "AAAA"</span>

</pre>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>s = "ADBD", k = 1
<strong>Output: </strong>3
<strong>Explanation: </strong>Change 'B' into 'D'.
Now s = "ADDD"</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>characterReplacement()&nbsp;</strong>which takes&nbsp;<strong>s</strong>&nbsp;and&nbsp;<strong>k</strong>&nbsp;as input parameters and returns the maximum length of sub-string after doing k changes.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(26)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10<sup>5</sup><br>
0 &lt;=&nbsp;k &lt; n</span></p>
</div>