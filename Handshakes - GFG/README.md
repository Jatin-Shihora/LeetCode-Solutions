# Handshakes
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">We have N&nbsp;persons sitting on a round table. Any person can do a handshake with any other person. </span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp;1<br>
2&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;3<br>
&nbsp; &nbsp; &nbsp;4</span></p>

<p><span style="font-size:18px">Handshake with 2-3 and 1-4 will cause cross.</span></p>

<p><span style="font-size:18px">In how many ways these N&nbsp;people can make handshakes so that no two handshakes cross each other.&nbsp;N would be even.&nbsp; </span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
<strong>Output:</strong>
1
<strong>Explanation:</strong>
{1,2} handshake is
possible.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
<strong>Output:</strong>
2
<strong>Explanation:</strong>
{{1, 2}, {3, 4}} are the
two handshakes possible.
{{1, 3}, {2, 4}} is another
set of handshakes possible.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>count()</strong>&nbsp;which takes&nbsp;an integer <strong>N</strong>&nbsp;as input parameters&nbsp;and returns an integer, the total number of handshakes possible so that no two handshakes cross each other.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(2<sup>N</sup>)<br>
<strong>Expected Space Complexity:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 30</span></p>
 <p></p>
            </div>