# Transfiguration
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Professor McGonagall teaches transfiguration at Hogwarts. She has given Harry the task of changing himself into a cat. She explains that the trick is to analyze your own DNA and change it into the DNA&nbsp;of a cat. The transfigure spell can be used to pick any one character from the DNA string, remove it and insert it in the beginning.&nbsp;<br>
Help Harry calculates minimum number of times he needs to use the spell to change himself into a cat.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>A = "GEEKSFORGEEKS" 
B = "FORGEEKSGEEKS"</span>
<span style="font-size:18px"><strong>Output:</strong> 3</span>
<span style="font-size:18px"><strong>Explanation:</strong>The conversion can take place 
in 3 operations:
1. Pick 'R' and place it at the front, 
&nbsp;  A="RGEEKSFOGEEKS"
2. Pick 'O' and place it at the front, 
&nbsp;  A="ORGEEKSFGEEKS"
3. Pick 'F' and place it at the front, 
&nbsp;  A="FORGEEKSGEEKS"</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>A = "ABC" 
B = "BCA"</span>
<span style="font-size:18px"><strong>Output:</strong> 2</span>
<span style="font-size:18px"><strong>Explanation:</strong> The conversion can take place 
in 2 operations:
1. Pick 'C' and place it at the front, 
&nbsp;  A = "CAB"
2. Pick 'B' and place it at the front, 
&nbsp;  A = "BCA"</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task: </strong>&nbsp;<br>
You don't need to read input or print anything. Complete the function <strong>transfigure()</strong> which takes strings <strong>A</strong> and <strong>B</strong> as input parameters and returns the minimum number of spells needed. If it is not possible to convert <strong>A</strong> to <strong>B</strong> then return -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(max(|A|, |B|))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |A|, |B| ≤ 10<sup>5</sup><br>
A and B consists of lowercase and uppercase letters of english alphabet only.</span></p>
 <p></p>
            </div>