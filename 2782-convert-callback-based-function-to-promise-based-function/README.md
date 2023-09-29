<h2><a href="https://leetcode.com/problems/convert-callback-based-function-to-promise-based-function/">2782. Convert Callback Based Function to Promise Based Function</a></h2><h3>Medium</h3><hr><p>Write a function that accepts another function <code>fn</code> and converts the callback-based function&nbsp;into a promise-based function.&nbsp;</p>

<p>The <code>promisify</code>&nbsp;function takes in a function <code>fn</code> that accepts a callback as its first argument and also any additional arguments. It&nbsp;returns a new function that returns a promise instead. The returned promise should resolve with the result of the original function when the callback is called with a successful response, and reject with the error when the callback is called with an error. The returned promise-based function should accept the additional arguments as inputs.</p>

<p>The following is an example of a function that could be passed into&nbsp;<code>promisify</code>.</p>

<pre>
function sum(callback, a, b) {
  if (a &lt; 0 || b &lt; 0) {
&nbsp;   const err = Error(&#39;a and b must be positive&#39;);
    callback(undefined, err);
&nbsp; } else {
    callback(a + b);
&nbsp; }
}
</pre>

<p>This is the equivalent code based on promises:</p>

<pre>
async function sum(a, b) {
  if (a &lt; 0 || b &lt; 0) {
    throw Error(&#39;a and b must be positive&#39;);
&nbsp; } else {
    return a + b;
&nbsp; }
}
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
fn = (callback, a, b, c) =&gt; {
    callback(a * b * c);
}
args = [1, 2, 3]
<strong>Output:</strong> {&quot;resolved&quot;: 6}
<strong>Explanation:</strong> 
const asyncFunc = promisify(fn);
asyncFunc(1, 2, 3).then(console.log); // 6

fn is called with a callback as the first argument and args as the rest. The promise based version of fn resolves a value of 6 when called with (1, 2, 3).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> 
fn = (callback, a, b, c) =&gt; {
    callback(a * b * c, &quot;Promise Rejected&quot;);
}
args = [4, 5, 6]
<strong>Output:</strong> {&quot;rejected&quot;: &quot;Promise Rejected&quot;}
<strong>Explanation:</strong> 
const asyncFunc = promisify(fn);
asyncFunc(4, 5, 6).catch(console.log); // &quot;Promise Rejected&quot;

fn is called with a callback as the first argument and args as the rest. As the second argument, the callback accepts an error message, so when fn is called, the promise is rejected with a error message provided in the callback. Note that it did not matter what was passed as the first argument into the callback.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= args.length &lt;= 100</code></li>
	<li><code>0 &lt;= args[i] &lt;= 10<sup>4</sup></code></li>
</ul>
