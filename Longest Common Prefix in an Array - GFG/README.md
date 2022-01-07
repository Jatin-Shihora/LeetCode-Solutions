# Longest Common Prefix in an Array
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a array of <strong>N</strong> strings, find the longest common prefix among all strings present in the array.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
arr[] = {geeksforgeeks, geeks, geek,
&nbsp;        geezer}
<strong>Output:</strong> gee
<strong>Explanation</strong>: "gee" is the longest common
prefix in all the given strings.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 2
arr[] = {hello, world}
<strong>Output:</strong> -1
<strong>Explanation</strong>: There's no common prefix
in the given strings.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>longestCommonPrefix()&nbsp;</strong>which takes the string array <strong>arr</strong>[] and its size <strong>N</strong> as inputs and <strong>returns</strong> the longest common prefix common in all the strings in the array. If there's no prefix common in all the strings, return "-1".</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N*max(|arr<sub>i</sub>|)).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(max(|arr<sub>i</sub>|)) for result.</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>3</sup><br>
1 ≤ |arr<sub>i</sub>| ≤ 10<sup>3</sup></span></p>
 <p></p>
            </div>