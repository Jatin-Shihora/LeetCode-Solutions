# Encrypt the string - 2
## Easy 
<div class="problem-statement">
                <p></p><div class="challenge_problem_statement">
<div class="msB challenge_problem_statement_body">
<div class="hackdown-content">
<p><span style="font-size:18px">You are given a string <strong>S</strong>. Every sub-string of identical letters is replaced by a single instance of that letter followed by the hexadecimal representation of the number of occurrences of that letter. Then, the string thus obtained is further encrypted by reversing it [ See the sample for more clarity ]. Print the Encrypted String.</span></p>

<p><span style="font-size:18px"><strong>Note: </strong>All Hexadecimal letters should be converted to Lowercase letters.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>S = "</strong>aaaaaaaaaaa"</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">ba </span>
<span style="font-size:18px"><strong>Explanation: </strong></span>
<span style="font-size:20px">aaaaaaaaaaa
Step1: a<strong>11 </strong>(a occurs 11 times)
Step2: a11 is ab [since 11 is b in
hexadecimal]
Step3: ba</span> <span style="font-size:18px">[After reversing]</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>S = "</strong></span><span style="font-size:20px">abc</span><span style="font-size:18px">"</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">1c1b1a</span>
<span style="font-size:18px"><strong>Explanation: </strong></span>
<span style="font-size:20px">abc
Step1: a1b1c1
Step2: 1c1b1a</span> <span style="font-size:18px">[After reversing]</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>encryptString()</strong> which takes a String S and returns the answer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|S|)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints</strong><br>
1 &lt;= |S| &lt;= 10<sup>5</sup></span></p>
</div>
</div>
</div>
 <p></p>
            </div>