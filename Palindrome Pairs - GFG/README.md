# Palindrome Pairs
## Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of strings arr[] of size N, find if there exists 2 strings arr[i] and arr[j] such that arr[i]+arr[j] is a palindrome i.e the concatenation of string arr[i] and arr[j] results into a palindrome.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong></span>:
<span style="font-size:18px">N = 6
arr[] = {"geekf", "geeks", "or","keeg", "abc", 
          "bc"}
<strong>Output:</strong>&nbsp;1&nbsp;
<strong>Explanation</strong>: There is a pair "geekf"
and "keeg".</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
arr[] = {"abc", "xyxcba", "geekst", "or", "bc"}
<strong>Output:&nbsp;</strong>1
<strong>Explanation</strong>: There is a pair "abc"
and "xyxcba".</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>palindromepair()</strong>&nbsp;which takes the array arr[], its size N<strong> </strong>and returns true if palindrome pair exists and returns false otherwise.<br>
The driver code itself prints 1 if returned value is true and prints 0 if returned value is false.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*l<sup>2</sup>) where l = length of longest string in arr[]<br>
<strong>Expected Auxiliary Space:</strong> O(N*l<sup>2</sup>) where l = length of longest string in arr[]</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>4</sup></span><br>
<span style="font-size:18px">1 ≤ |arr[i]| ≤ 10</span></p>
 <p></p>
            </div>