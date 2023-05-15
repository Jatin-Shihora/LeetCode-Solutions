<h2><a href="https://leetcode.com/problems/sleep/">2621. Sleep</a></h2><h3>Easy</h3><hr><div><p>Given&nbsp;a positive integer <code>millis</code>, write an asyncronous function that sleeps for <code>millis</code>&nbsp;milliseconds. It can resolve&nbsp;any value.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> millis = 100
<strong>Output:</strong> 100
<strong>Explanation:</strong> It should return a promise that resolves after 100ms.
let t = Date.now();
sleep(100).then(() =&gt; {
  console.log(Date.now() - t); // 100
});
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> millis = 200
<strong>Output:</strong> 200
<strong>Explanation:</strong> It should return a promise that resolves after 200ms.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= millis &lt;= 1000</code></li>
</ul>
</div>