<h2><a href="https://leetcode.com/problems/generate-fibonacci-sequence/">2648. Generate Fibonacci Sequence</a></h2><h3>Easy</h3><hr><div><p>Write a generator function that returns a generator object which yields the&nbsp;<strong>fibonacci sequence</strong>.</p>

<p>The&nbsp;<strong>fibonacci sequence</strong>&nbsp;is defined by the relation <code>X<sub>n</sub>&nbsp;= X<sub>n-1</sub>&nbsp;+ X<sub>n-2</sub></code>.</p>

<p>The first few numbers&nbsp;of the series are <code>0, 1, 1, 2, 3, 5, 8, 13</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> callCount = 5
<strong>Output:</strong> [0,1,1,2,3]
<strong>Explanation:</strong>
const gen = fibGenerator();
gen.next().value; // 0
gen.next().value; // 1
gen.next().value; // 1
gen.next().value; // 2
gen.next().value; // 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> callCount = 0
<strong>Output:</strong> []
<strong>Explanation:</strong> gen.next() is never called so nothing is outputted
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= callCount &lt;= 50</code></li>
</ul>
</div>