<h2><a href="https://leetcode.com/problems/array-upper-bound">2768. Array Upper Bound</a></h2><h3>Easy</h3><hr><p>Write code that enhances all arrays such that you can call the <code>upperBound()</code>&nbsp;method on any array and it will return the last index of a given <code>target</code> number.&nbsp;<code>nums</code>&nbsp;is a sorted ascending array of numbers that may contain duplicates. If the <code>target</code> number is not found in the array, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,4,5], target = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> Last index of target value is 2
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,4,5], target = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> Because there is no digit 2 in the array, return -1.</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,4,6,6,6,6,7], target = 6
<strong>Output:</strong> 5
<strong>Explanation:</strong> Last index of target value is 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code><font face="monospace">-10<sup>4</sup>&nbsp;&lt;= nums[i], target &lt;= 10<sup>4</sup></font></code></li>
	<li><code>nums</code>&nbsp;is sorted in ascending order.</li>
</ul>
