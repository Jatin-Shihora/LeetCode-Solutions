<h2><a href="https://leetcode.com/problems/generate-circular-array-values/">2757. Generate Circular Array Values<div class="css-1x6t3yl"><a title="Edit this question" href="/library/3020" target="_blank" class="css-17r6ukt"><svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04a.996.996 0 0 0 0-1.41l-2.34-2.34a.996.996 0 0 0-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></a></div></a></h2><h3>Medium</h3><hr><div><p>Given a <strong>circular</strong> array <code>arr</code> and an integer&nbsp;<code>startIndex</code>, return a generator object&nbsp;<code>gen</code> that yields values from <code>arr</code>. The first time <code>gen.next()</code> is called on the generator, it should should yield&nbsp;<code>arr[startIndex]</code>. Each subsequent time&nbsp;<code>gen.next()</code>&nbsp;is called, an integer <code>jump</code>&nbsp;will be passed into the function (Ex: <code>gen.next(-3)</code>).</p>

<ul>
	<li>If&nbsp;<code>jump</code>&nbsp;is positive, the index should increase by that value, however if the current index is the last index, it should instead jump to the first index.</li>
	<li>If&nbsp;<code>jump</code>&nbsp;is negative, the index should decrease&nbsp;by the magnitude of that value, however if the current index is the first index, it should instead jump to the last&nbsp;index.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [1,2,3,4,5], steps = [1,2,6], startIndex = 0
<strong>Output:</strong> [1,2,4,5]
<strong>Explanation:</strong> &nbsp;
&nbsp;const gen = cycleGenerator(arr, startIndex);
&nbsp;gen.next().value; &nbsp;// 1, index = startIndex = 0
&nbsp;gen.next(1).value; // 2, index = 1, 0 -&gt; 1
&nbsp;gen.next(2).value; // 4, index = 3, 1 -&gt; 2 -&gt; 3
&nbsp;gen.next(6).value; // 5, index = 4, 3 -&gt; 4 -&gt; 0 -&gt; 1 -&gt; 2 -&gt; 3 -&gt; 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [10,11,12,13,14,15], steps = [1,4,0,-1,-3], startIndex = 1
<strong>Output:</strong> [11,12,10,10,15,12]
<strong>Explanation:</strong> 
&nbsp;const gen = cycleGenerator(arr, startIndex);
&nbsp;gen.next().value; &nbsp; // 11, index = 1
&nbsp;gen.next(1).value;  // 12, index = 2
&nbsp;gen.next(4).value;  // 10, index = 0
&nbsp;gen.next(0).value;  // 10, index = 0
&nbsp;gen.next(-1).value; // 15, index = 5
&nbsp;gen.next(-3).value; // 12, index = 2
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> arr = [2,4,6,7,8,10], steps = [-4,5,-3,10], startIndex = 3
<strong>Output:</strong> [7,10,8,4,10]
<strong>Explanation:</strong> &nbsp;
&nbsp;const gen = cycleGenerator(arr, startIndex);
&nbsp;gen.next().value &nbsp; // 7,  index = 3
&nbsp;gen.next(-4).value // 10, index = 5
&nbsp;gen.next(5).value  // 8,  index = 4
&nbsp;gen.next(-3).value // 4,  index = 1 &nbsp;
&nbsp;gen.next(10).value // 10, index = 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= steps.length &lt;= 100</code></li>
	<li><code>-10<sup>4</sup>&nbsp;&lt;= steps[i],&nbsp;arr[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= startIndex &lt;&nbsp;arr.length</code></li>
</ul>
</div>