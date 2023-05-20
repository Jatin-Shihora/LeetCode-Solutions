<h2><a href="https://leetcode.com/problems/debounce/">2627. Debounce</a></h2><h3>Medium</h3><hr><div><p>Given a function&nbsp;<code>fn</code> and a time in milliseconds&nbsp;<code>t</code>, return&nbsp;a&nbsp;<strong>debounced</strong>&nbsp;version of that function.</p>

<p>A&nbsp;<strong>debounced</strong>&nbsp;function is a function whose execution is delayed by&nbsp;<code>t</code>&nbsp;milliseconds and whose&nbsp;execution is cancelled if it is called again within that window of time. The debounced function should also recieve the passed parameters.</p>

<p>For example, let's say&nbsp;<code>t = 50ms</code>, and the function was called at&nbsp;<code>30ms</code>,&nbsp;<code>60ms</code>, and <code>100ms</code>. The first 2 function calls would be cancelled, and the 3rd function call would be executed at&nbsp;<code>150ms</code>. If instead&nbsp;<code>t = 35ms</code>, The 1st call would be cancelled, the 2nd would be executed at&nbsp;<code>95ms</code>, and the 3rd would be executed at&nbsp;<code>135ms</code>.</p>

<p><img alt="Debounce Schematic" src="https://assets.leetcode.com/uploads/2023/04/08/screen-shot-2023-04-08-at-11048-pm.png" style="width: 800px; height: 242px;"></p>

<p>The above diagram&nbsp;shows how debounce will transform&nbsp;events. Each rectangle represents 100ms and the debounce time is 400ms. Each color represents a different set of inputs.</p>

<p>Please solve it without using lodash's&nbsp;<code>_.debounce()</code> function.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> 
t = 50
calls = [
&nbsp; {"t": 50, inputs: [1]},
&nbsp; {"t": 75, inputs: [2]}
]
<strong>Output:</strong> [{"t": 125, inputs: [2]}]
<strong>Explanation:</strong>
let start = Date.now();
function log(...inputs) { 
&nbsp; console.log([Date.now() - start, inputs ])
}
const dlog = debounce(log, 50);
setTimeout(() =&gt; dlog(1), 50);
setTimeout(() =&gt; dlog(2), 75);

The 1st call is cancelled by the 2nd call because the 2nd call occurred before 100ms
The 2nd call is delayed by 50ms and executed at 125ms. The inputs were (2).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> 
t = 20
calls = [
&nbsp; {"t": 50, inputs: [1]},
&nbsp; {"t": 100, inputs: [2]}
]
<strong>Output:</strong> [{"t": 70, inputs: [1]}, {"t": 120, inputs: [2]}]
<strong>Explanation:</strong>
The 1st call is delayed until 70ms. The inputs were (1).
The 2nd call is delayed until 120ms. The inputs were (2).
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> 
t = 150
calls = [
&nbsp; {"t": 50, inputs: [1, 2]},
&nbsp; {"t": 300, inputs: [3, 4]},
&nbsp; {"t": 300, inputs: [5, 6]}
]
<strong>Output:</strong> [{"t": 200, inputs: [1,2]}, {"t": 450, inputs: [5, 6]}]
<strong>Explanation:</strong>
The 1st call is delayed by 150ms and ran at 200ms. The inputs were (1, 2).
The 2nd call is cancelled by the 3rd call
The 3rd call is delayed by 150ms and ran at 450ms. The inputs were (5, 6).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= t &lt;= 1000</code></li>
	<li><code>1 &lt;= calls.length &lt;= 10</code></li>
	<li><code>0 &lt;= calls[i].t &lt;= 1000</code></li>
	<li><code>0 &lt;= calls[i].inputs.length &lt;= 10</code></li>
</ul>
</div>