# Largest rectangle of 1s with swapping of columns allowed
## Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a matrix <strong>mat</strong>&nbsp;of size <strong>R*C</strong> with 0 and 1’s, find the largest rectangle of all 1’s in the matrix. The rectangle can be formed by swapping any pair of columns of given matrix.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
R = 3, C = 5
mat[][] = {{0, 1, 0, 1, 0},
           {0, 1, 0, 1, 1},
           {1, 1, 0, 1, 0}};
<strong>Output:</strong> 6
<strong>Explanation: </strong>The largest rectangle's area
is 6. The rectangle can be formed by
swapping column  2 with 3. The matrix
after swapping will be
     0 0 1 1 0
     0 0 1 1 1
     1 0 1 1 0
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>R = 4, C = 5
mat[][] = {{0, 1, 0, 1, 0},
           {0, 1, 1, 1, 1},
           {1, 1, 1, 0, 1},
           {1, 1, 1, 1, 1}};
<strong>Output:</strong> 9
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxArea()</strong>&nbsp;which takes the 2D array of&nbsp;booleans&nbsp;<strong>mat,</strong>&nbsp;<strong>r&nbsp;</strong>and<strong>&nbsp;c</strong><strong>&nbsp;</strong>as parameters and returns an integer denoting the answer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(R*(R + C))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(R*C)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;= R,C &lt;=10<sup>3</sup><br>
0 &lt;= mat[i][j] &lt;= 1</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>