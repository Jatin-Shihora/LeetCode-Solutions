# Steps by Knight
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong><br>
The initial and the target position co-ordinates of&nbsp;Knight have been given accoring to 1-base indexing.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=6
knightPos[ ] = {4, 5}
targetPos[ ] = {1, 1}</span>
<span style="font-size:18px"><strong>Output:</strong>
3</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<img src="https://media.geeksforgeeks.org/wp-content/uploads/KnightChess.jpg" class="img-responsive">
<span style="font-size:18px">Knight takes 3 step to reach from 
(4, 5) to (1, 1):
(4, 5) -&gt; (5, 3) -&gt; (3, 2) -&gt; (1, 1).</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minStepToReachTarget()</strong>&nbsp;which takes the inital position of Knight (KnightPos), the target position of Knight (TargetPos) and the size of the chess board (N) as an input parameters&nbsp;and returns the minimum number of steps required by the knight to reach from its current position to the given target position.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup>).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N<sup>2</sup>).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000<br>
1 &lt;= Knight_pos(X, Y), Targer_pos(X, Y)&nbsp;&lt;= N</span></p>
 <p></p>
            </div>