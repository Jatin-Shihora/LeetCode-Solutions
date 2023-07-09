<h2><a href="https://leetcode.com/problems/execute-cancellable-function-with-delay/">2715. Execute Cancellable Function With Delay<div class="css-1x6t3yl"><a title="Edit this question" href="/library/3027" target="_blank" class="css-17r6ukt"><svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04a.996.996 0 0 0 0-1.41l-2.34-2.34a.996.996 0 0 0-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></a></div></a></h2><h3>Easy</h3><hr><div><p>Given a function <code>fn</code>, an array or arguments&nbsp;<code>args</code>, and a timeout&nbsp;<code>t</code>&nbsp;in milliseconds, return a cancel function <code>cancelFn</code>.</p>

<p>After a delay of&nbsp;<code>t</code>,&nbsp;<code>fn</code>&nbsp;should be called with <code>args</code> passed as parameters <strong>unless</strong> <code>cancelFn</code> was called first. In that case,&nbsp;<code>fn</code> should never be called.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> fn = (x) =&gt; x * 5, args = [2], t = 20
<strong>Output:</strong> [{"time": 20, "returned": 10}]
<strong>Explanation:</strong> 
const cancelTime = 50
const cancel = cancellable((x) =&gt; x * 5, [2], 20); // fn(2) called at t=20ms
setTimeout(cancel, cancelTime);

The cancellation was scheduled to occur after a delay of cancelTime (50ms), which happened after the execution of fn(2) at 20ms.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> fn = (x) =&gt; x**2, args = [2], t = 100
<strong>Output:</strong> []
<strong>Explanation:</strong> 
const cancelTime = 50 
const cancel = cancellable((x) =&gt; x**2, [2], 100); // fn(2) not called
setTimeout(cancel, cancelTime);

The cancellation was scheduled to occur after a delay of cancelTime (50ms), which happened before the execution of fn(2) at 100ms, resulting in fn(2) never being called.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> fn = (x1, x2) =&gt; x1 * x2, args = [2,4], t = 30
<strong>Output:</strong> [{"time": 30, "returned": 8}]
<strong>Explanation:</strong>
const cancelTime = 100
const cancel = cancellable((x1, x2) =&gt; x1 * x2, [2,4], 30); // fn(2,4) called at t=30ms
setTimeout(cancel, cancelTime);

The cancellation was scheduled to occur after a delay of cancelTime (100ms), which happened after the execution of fn(2,4) at 30ms.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>fn is a function</code></li>
	<li><code>args is a valid JSON array</code></li>
	<li><code>1 &lt;= args.length &lt;= 10</code></li>
	<li><code><font face="monospace">20 &lt;= t &lt;= 1000</font></code></li>
	<li><code><font face="monospace">10 &lt;= cancelT &lt;= 1000</font></code></li>
</ul>
</div>