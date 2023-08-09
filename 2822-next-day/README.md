<h2><a href="https://leetcode.com/problems/next-day">2822. Next Day</a></h2><h3>Easy</h3><hr><p>Write code that enhances all date objects such that you can call the <code>date.nextDay()</code>&nbsp;method on any date object and it will return&nbsp;the next day in the format <em>YYYY-MM-DD</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> date = &quot;2014-06-20&quot;
<strong>Output:</strong> &quot;2014-06-21&quot;
<strong>Explanation:</strong> 
const date = new Date(&quot;2014-06-20&quot;);
date.nextDay(); // &quot;2014-06-21&quot;
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> date = &quot;2017-10-31&quot;
<strong>Output:</strong> &quot;2017-11-01&quot;
<strong>Explanation:</strong> The day after 2017-10-31 is 2017-11-01.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>new Date(date) is a valid date object</code></li>
</ul>
