# Postorder Traversal (Iterative)
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary tree. Find the postorder traversal of the tree <strong>without using recursion</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>           </strong>1
<strong>         /   \</strong>
        2     3
      /  \
     4    5

<strong>Output: </strong>4 5 2 3 1
<strong>Explanation:</strong>
Postorder traversal (Left-&gt;Right-&gt;Root) of 
the tree is 4 5 2 3 1.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
             8
          /      \
        1          5
         \       /   \
          7     10    6
           \   /
&nbsp;           10 6

<strong>Output: </strong>10 7 1 6 10 6 5 8&nbsp;
<strong>Explanation:</strong>
Inorder traversal (Left-&gt;Right-&gt;Root) 
of the tree is 10 7 1 6 10 6 5 8&nbsp;.</span></pre>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Your task:</strong></span></div>

<div><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function <strong>postOrder() </strong>which takes the root of the tree as input and returns a list containing the postorder traversal of the tree, calculated<strong> without using recursion.</strong></span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Expected time complexity: </strong>O(N)</span></div>

<div><span style="font-size:18px"><strong>Expected auxiliary space: </strong>O(N)</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Constraints:</strong></span></div>

<div><span style="font-size:18px">1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>
1 &lt;= Data of a node &lt;= 10<sup>5</sup></span></div>
 <p></p>
            </div>