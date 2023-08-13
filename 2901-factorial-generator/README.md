<h2><a href="https://leetcode.com/problems/factorial-generator">2901. Factorial Generator</a></h2><h3>Easy</h3><hr><p>Write a generator function that takes an integer <code>n</code> as an argument and returns a generator object which yields the <strong>factorial sequence</strong>.</p>

<p>The&nbsp;<strong>factorial sequence</strong>&nbsp;is defined by the relation <code>n!&nbsp;= n *&nbsp;<span style="font-size: 13px;">(</span>n-1)&nbsp;* (n-2)&nbsp;*&nbsp;...&nbsp;* 2 * 1​​​.</code></p>

<p>The factorial of 0 is defined as 1.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 5
<strong>Output:</strong> [1,2,6,24,120]
<strong>Explanation:</strong> 
const gen = factorial(5)
gen.next().value // 1
gen.next().value // 2
gen.next().value // 6
gen.next().value // 24
gen.next().value // 120
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> [1,2]
<strong>Explanation:</strong> 
const gen = factorial(2) 
gen.next().value // 1 
gen.next().value // 2 
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 0
<strong>Output:</strong> [1]
<strong>Explanation:</strong> 
const gen = factorial(0) 
gen.next().value // 1 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 18</code></li>
</ul>
