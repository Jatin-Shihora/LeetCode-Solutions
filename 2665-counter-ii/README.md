<h2><a href="https://leetcode.com/problems/counter-ii/">2665. Counter II</a></h2><h3>Easy</h3><hr><div><p>Write a function&nbsp;<code>createCounter</code>. It should accept an initial integer&nbsp;<code>init</code>. It should return an object with three functions.</p>

<p>The three functions are:</p>

<ul>
	<li><code>increment()</code>&nbsp;increases&nbsp;the current value by 1 and then returns it.</li>
	<li><code>decrement()</code>&nbsp;reduces the current value by 1 and then returns it.</li>
	<li><code>reset()</code>&nbsp;sets the current value to&nbsp;<code>init</code>&nbsp;and then returns it.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> init = 5, calls = ["increment","reset","decrement"]
<strong>Output:</strong> [6,5,4]
<strong>Explanation:</strong>
const counter = createCounter(5);
counter.increment(); // 6
counter.reset(); // 5
counter.decrement(); // 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> init = 0, calls = ["increment","increment","decrement","reset","reset"]
<strong>Output:</strong> [1,2,1,0,0]
<strong>Explanation:</strong>
const counter = createCounter(0);
counter.increment(); // 1
counter.increment(); // 2
counter.decrement(); // 1
counter.reset(); // 0
counter.reset(); // 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-1000 &lt;= init &lt;= 1000</code></li>
	<li><code>total calls not to exceed 1000</code></li>
</ul>
</div>