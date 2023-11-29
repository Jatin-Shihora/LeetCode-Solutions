<h2><a href="https://leetcode.com/problems/interval-cancellation/">2725. Interval Cancellation<div class="css-1x6t3yl"><a title="Edit this question" href="/library/3025" target="_blank" class="css-17r6ukt"><svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04a.996.996 0 0 0 0-1.41l-2.34-2.34a.996.996 0 0 0-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></a></div></a></h2><h3>Easy</h3><hr><div><p>Given a function <code>fn</code>, an array of arguments&nbsp;<code>args</code>, and&nbsp;an interval time <code>t</code>, return a cancel function <code>cancelFn</code>.</p>

<p>The function <code>fn</code> should be called with <code>args</code> immediately and then called again every&nbsp;<code>t</code> milliseconds&nbsp;until&nbsp;<code>cancelFn</code>&nbsp;is called at <code>cancelT</code> ms.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> fn = (x) =&gt; x * 2, args = [4], t = 35, cancelT = 190
<strong>Output:</strong> 
[
   {"time": 0, "returned": 8},
   {"time": 35, "returned": 8},
   {"time": 70, "returned": 8},
   {"time": 105, "returned": 8},
   {"time": 140, "returned": 8},
   {"time": 175, "returned": 8}
]
<strong>Explanation:</strong> 
const result = []
const fn = (x) =&gt; x * 2
const args = [4], t = 35, cancelT = 190

const start = performance.now()

const log = (...argsArr) =&gt; {
    const diff = Math.floor(performance.now() - start)
    result.push({"time": diff, "returned": fn(...argsArr)})
}

const cancel = cancellable(log, [4], 35);
setTimeout(cancel, 190);

setTimeout(() =&gt; {
    console.log(result) // Output
 }, cancelT + t + 15)  

Every 35ms, fn(4) is called. Until t=190ms, then it is cancelled.
1st fn call is at 0ms. fn(4) returns 8.
2nd fn call is at 35ms. fn(4) returns 8.
3rd fn call is at 70ms. fn(4) returns 8.
4th fn call is at&nbsp;105ms. fn(4) returns 8.
5th fn call is at 140ms. fn(4) returns 8.
6th fn call is at 175ms. fn(4) returns 8.
Cancelled at 190ms
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> fn = (x1, x2) =&gt; (x1 * x2), args = [2, 5], t = 30, cancelT = 165
<strong>Output:</strong> 
[
   {"time": 0, "returned": 10},
   {"time": 30, "returned": 10},
   {"time": 60, "returned": 10},
   {"time": 90, "returned": 10},
   {"time": 120, "returned": 10},
   {"time": 150, "returned": 10}
]
<strong>Explanation:</strong> Every 30ms, fn(2, 5) is called. Until t=165ms, then it is cancelled.
1st fn call is at 0ms&nbsp;
2nd fn call is at 30ms&nbsp;
3rd fn call is at 60ms&nbsp;
4th fn call is at&nbsp;90ms&nbsp;
5th fn call is at 120ms&nbsp;
6th fn call is at 150ms
Cancelled at 165ms
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> fn = (x1, x2, x3) =&gt; (x1 + x2 + x3), args = [5, 1, 3], t = 50, cancelT = 180
<strong>Output:</strong> 
[
   {"time": 0, "returned": 9},
   {"time": 50, "returned": 9},
   {"time": 100, "returned": 9},
   {"time": 150, "returned": 9}
]
<strong>Explanation:</strong> Every 50ms, fn(5, 1, 3) is called. Until t=180ms, then it is cancelled. 
1st fn call is at 0ms
2nd fn call is at 50ms
3rd fn call is at 100ms
4th fn call is at&nbsp;150ms
Cancelled at 180ms
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>fn</code> is a function</li>
	<li><code>args</code> is a valid JSON array</li>
	<li><code>1 &lt;= args.length &lt;= 10</code></li>
	<li><code><font face="monospace">30 &lt;= t &lt;= 100</font></code></li>
	<li><code><font face="monospace">10 &lt;= cancelT &lt;= 500</font></code></li>
</ul>
</div>