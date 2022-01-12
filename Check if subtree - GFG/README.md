# Check if subtree
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two binary trees with head reference as <strong>T</strong><strong> </strong>and <strong>S</strong> having at most <strong>N</strong> nodes. The&nbsp;task is to check if S is present as subtree in T.<br>
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>T:&nbsp; &nbsp; &nbsp;&nbsp;1&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; S:&nbsp; &nbsp;3
 &nbsp; &nbsp; &nbsp;/&nbsp; &nbsp;\&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   /
 &nbsp; &nbsp; 2&nbsp; &nbsp; &nbsp;3&nbsp; &nbsp; &nbsp; &nbsp;  &nbsp;4
 &nbsp; /&nbsp; \&nbsp; &nbsp; /
&nbsp; N&nbsp; &nbsp; N&nbsp; 4
<strong>Output: </strong>1 
<strong>Explanation:</strong> S is present in T<strong>
</strong>
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>T:&nbsp; &nbsp; &nbsp; 26&nbsp; &nbsp; &nbsp;   &nbsp;S: &nbsp; 26
 &nbsp; &nbsp; &nbsp;&nbsp;/&nbsp; &nbsp;\&nbsp; &nbsp;      &nbsp; /&nbsp; \
 &nbsp; &nbsp; 10&nbsp; &nbsp; &nbsp;N&nbsp; &nbsp;     10&nbsp; &nbsp;&nbsp;N
 &nbsp; /&nbsp; &nbsp; \&nbsp; &nbsp; &nbsp; &nbsp;    /&nbsp;&nbsp;\
 &nbsp;&nbsp;20&nbsp; &nbsp; 30&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;20&nbsp; 30
 &nbsp;/&nbsp; \&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   /&nbsp; \
 40&nbsp; &nbsp;60&nbsp; &nbsp; &nbsp; &nbsp;  40&nbsp;&nbsp;60
<strong>Output: </strong>1 
<strong>Explanation: </strong>
S and T are both same. Hence, 
it can be said that S is a subtree 
of T.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the <strong>function isSubtree()&nbsp;</strong>that takes root&nbsp;node of S and T as parameters<strong> </strong>and <strong>returns 1</strong> if&nbsp;S is a subtree of T else <strong>0</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>
1 &lt;= Value of nodes &lt;= 10<sup>4</sup></span><br>
&nbsp;</p>
 <p></p>
            </div>