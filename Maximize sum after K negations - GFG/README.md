# Maximize sum after K negations
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of integers of size <strong>N</strong> and a number <strong>K</strong>., Your must modify array <strong>arr[]</strong> exactly <strong>K</strong> number of times. Here modify array means in each operation you can replace any array element either <strong>arr[i] </strong>by<strong> -arr[i]</strong> or <strong>-arr[i] </strong>by<strong> arr[i]</strong>. You need to perform this operation in such a way that after K operations, the sum of the array must be maximum.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5, K = 1
arr[] = {1, 2, -3, 4, 5}
<strong>Output:</strong>
15
<strong>Explanation:
</strong>We have k=1 so we can change -3 to 3 and
sum all the elements to produce 15 as output.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 10, K = 5
arr[] = {5, -2, 5, -4, 5, -12, 5, 5, 5, 20}
<strong>Output:</strong>
68
<strong>Explanation:
</strong>Here  we have k=5 so we turn -2, -4, -12 to
2, 4, and 12 respectively. Since we have
performed 3 operations so k is now 2. To get
maximum sum of array we can turn positive
turned 2 into negative and then positive
again so k is 0. Now sum is
5+5+4+5+12+5+5+5+20+2 = 68</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You <strong>don't</strong> have to print anything, print ting is done by the driver code itself. You have to complete the function <strong>maximizeSum()</strong> which takes the array <strong>A[]</strong>, its size <strong>N</strong><strong>, </strong>and an integer <strong>K </strong>as inputs and returns the maximum possible sum.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N*logN)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
<span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial">1 ≤ N ≤ 10<sup>5</sup></span><br>
<span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial">-10<sup>9</sup>&nbsp;≤ A<sub>i</sub> ≤ 10<sup>9</sup></span></span></p>
 <p></p>
            </div>