<h2><a href="https://leetcode.com/problems/add-two-promises/">2723. Add Two Promises</a></h2><h3>Easy</h3><hr><div>Given two promises <code>promise1</code> and <code>promise2</code>, return a new promise. <code>promise1</code> and <code>promise2</code>&nbsp;will both resolve with a number. The returned promise should resolve with the sum of the two numbers.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> 
promise1 = new Promise(resolve =&gt; setTimeout(() =&gt; resolve(2), 20)), 
promise2 = new Promise(resolve =&gt; setTimeout(() =&gt; resolve(5), 60))
<strong>Output:</strong> 7
<strong>Explanation:</strong> The two input promises resolve with the values of 2 and 5 respectively. The returned promise should resolve with a value of 2 + 5 = 7. The time the returned promise resolves is not judged for this problem.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> 
promise1 = new Promise(resolve =&gt; setTimeout(() =&gt; resolve(10), 50)), 
promise2 = new Promise(resolve =&gt; setTimeout(() =&gt; resolve(-12), 30))
<strong>Output:</strong> -2
<strong>Explanation:</strong> The two input promises resolve with the values of 10 and -12 respectively. The returned promise should resolve with a value of 10 + -12 = -2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>promise1 and promise2 are&nbsp;promises that resolve&nbsp;with a number</code></li>
</ul>
</div>