# Reverse First K elements of Queue
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an integer <strong>K </strong>and a&nbsp;<a href="http://www.geeksforgeeks.org/queue-data-structure/" target="_blank">queue</a>&nbsp;of integers, we need to reverse the order of the first<strong> K</strong> elements of the queue, leaving the other elements in the same relative order.</span></p>

<p><span style="font-size:18px">Only following standard operations are allowed on queue.</span></p>

<ul>
	<li><span style="font-size:18px">enqueue(x) : Add an item x to rear of queue</span></li>
	<li><span style="font-size:18px">dequeue() : Remove an item from front of queue</span></li>
	<li><span style="font-size:18px">size() : Returns number of elements in queue.</span></li>
	<li><span style="font-size:18px">front() : Finds front item.</span></li>
</ul>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">5 3
1 2 3 4 5

<strong>Output: 
</strong>3 2 1 4 5
<strong>
Explanation: 
</strong>After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.
</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">4 4
4 3 2 1

<strong>Output: 
</strong>1 2 3 4
<strong>
Explanation: 
</strong>After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px"><strong>Complete </strong>the <strong>provided function</strong> <strong>modifyQueue </strong>that takes <strong>queue and k</strong> as <strong>parameters </strong>and <strong>returns </strong>a <strong>modified </strong>queue. The <strong>printing </strong>is done <strong>automatically </strong>by the <strong>driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected TIme Complexity</strong> : O(n)<br>
<strong>Expected Auxilliary Space </strong>: O(n)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000<br>
1 &lt;= K &lt;= N</span></p>

<p><span style="font-size:18px"><strong>Note:</strong>The <strong>Input/Ouput</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p></p>
            </div>