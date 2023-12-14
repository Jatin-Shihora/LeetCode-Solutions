<h2><a href="https://leetcode.com/problems/date-range-generator/">2777. Date Range Generator<div class="css-1x6t3yl"><a title="Edit this question" href="/library/3013" target="_blank" class="css-17r6ukt"><svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04a.996.996 0 0 0 0-1.41l-2.34-2.34a.996.996 0 0 0-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></a></div></a></h2><h3>Medium</h3><hr><div><p>Given a start date <code>start</code>, an end date <code>end</code>, and a positive integer&nbsp;<code>step</code>, return a generator object that yields&nbsp;dates in the range from <code>start</code> to <code>end</code>&nbsp;inclusive. All dates&nbsp;are in the string format&nbsp;<code>YYYY-MM-DD</code>. The value of&nbsp;<code>step</code>&nbsp;indicates the number of days between consecutive yielded values.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> start = "2023-04-01", end = "2023-04-04", step = 1
<strong>Output:</strong> ["2023-04-01","2023-04-02","2023-04-03","2023-04-04"]
<strong>Explanation:</strong> 
const g = dateRangeGenerator(start, end, step);
g.next().value // '2023-04-01'
g.next().value // '2023-04-02'
g.next().value // '2023-04-03'
g.next().value // '2023-04-04'</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> start = "2023-04-10", end = "2023-04-20", step = 3
<strong>Output:</strong> ["2023-04-10","2023-04-13","2023-04-16","2023-04-19"]
<strong>Explanation:</strong> 
const g = dateRangeGenerator(start, end, step);
g.next().value // '2023-04-10'
g.next().value // '2023-04-13'
g.next().value // '2023-04-16'
g.next().value // '2023-04-19'</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> start = "2023-04-10", end = "2023-04-10", step = 1
<strong>Output:</strong> ["2023-04-10"]
<strong>Explanation:</strong> 
const g = dateRangeGenerator(start, end, step);
g.next().value // '2023-04-10'
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>new Date(start) &lt;= new Date(end)</code></li>
	<li><code>0 &lt;= The difference in days between the start date and the end date &lt;= 1000</code></li>
	<li><code>1 &lt;= step &lt;= 100</code></li>
</ul>
</div>